/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <hbuisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:46:12 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/27 13:16:30 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat(int size, char **strs, char *concat, char *sep)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_strcat(concat, strs[i]);
		if (!(i == size - 1))
			ft_strcat(concat, sep);
		i++;
	}
	return (concat);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char*concat;
	char*result;
	int total_len;
	int i;

	i = 0;
	total_len = 0;
	if (size == 0)
	{
		if (!(concat = (char *)malloc(sizeof(char))))
			return (0);
		return (concat);
	}
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ((ft_strlen(sep)) * (size - 1));
	if (!(concat = (char *)malloc(sizeof(char) * total_len + 1)))
		return (0);
	result = ft_concat(size, strs, concat, sep);
	return (result);
}
