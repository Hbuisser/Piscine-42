/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 07:59:01 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/22 20:53:13 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (nb == 1)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power > 1)
		nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}
