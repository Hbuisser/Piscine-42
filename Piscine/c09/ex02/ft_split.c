/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <hbuisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 18:21:14 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/29 16:28:55 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		is_separator(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		is_word(char str1, char str2, char *charset)
{
	if (!is_separator(str1, charset) && is_separator(str2, charset))
		return (1);
	else
		return (0);
}

int		count_w(char *str, char *charset)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1], charset) || i == 0)
			count++;
		i++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char*word;
	int i;

	i = 0;
	while (str[i] != '\0' && !is_separator(str[i], charset))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i] != '\0' && !is_separator(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char**array;
	int i;

	i = 0;
	if (!(array = (char **)malloc(sizeof(char *) * count_w(str, charset) + 1)))
		return (0);
	while (*str)
	{
		while (*str && is_separator(*str, charset))
			str++;
		if (*str && !is_separator(*str, charset))
		{
			array[i] = malloc_word(str, charset);
			i++;
			while (*str && !is_separator(*str, charset))
				str++;
		}
	}
	array[i] = NULL;
	return (array);
}
