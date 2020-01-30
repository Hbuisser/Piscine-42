/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <hbuisser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:14:18 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/27 12:53:41 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int c;
	int *tab;
	char*ptr;

	c = 0;
	if (min >= max)
	{
		ptr = NULL;
		return (0);
	}
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
	{
		tab[c] = min;
		c++;
		min++;
	}
	*range = tab;
	return (c);
}
