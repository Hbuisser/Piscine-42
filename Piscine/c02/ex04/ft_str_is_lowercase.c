/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 20:05:21 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/13 16:52:52 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}
