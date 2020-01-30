/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:29:11 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/21 19:31:36 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_lenght(char *base)
{
	int lenght;

	lenght = 0;
	while (base[lenght] != '\0')
		lenght++;
	return (lenght);
}

int		ft_is_valid(char *base)
{
	int len;
	int i;
	int j;

	len = ft_lenght(base);
	if (len <= 0 || len == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	a;
	int			lenght;

	lenght = ft_lenght(base);
	a = nbr;
	if (ft_is_valid(base))
	{
		if (a < 0)
		{
			ft_putchar('-');
			a *= -1;
		}
		if ((a / lenght) > 0)
			ft_putnbr_base(a / lenght, base);
		ft_putchar(base[a % lenght]);
	}
	else
		ft_putchar('\0');
}
