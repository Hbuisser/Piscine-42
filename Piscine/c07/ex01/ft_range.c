/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 07:08:52 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/25 13:11:39 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int i;
	int c;
	int *ptr;
	int *array;

	i = min;
	c = 0;
	ptr = NULL;
	if (min >= max)
		return (ptr);
	if (!(array = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (i < max)
	{
		array[c] = i;
		i++;
		c++;
	}
	array[c] = '\0';
	return (array);
}
