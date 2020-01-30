/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:22:13 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/24 18:02:11 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display(int len, int argc, char **argv)
{
	int i;

	i = 1;
	argc = 0;
	while (len >= 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
		len--;
	}
}

int		main(int argc, char **argv)
{
	char*tmp;
	int	i;
	int	j;
	int	len;

	len = argc - 1;
	i = 1;
	while (i <= len)
	{
		j = i;
		while (j <= len)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	ft_display(len, argc, argv);
	return (0);
}
