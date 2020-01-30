/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 16:37:58 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/22 20:50:02 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb <= 1)
		return (0);
	if (nb <= 3)
		return (1);
	if (nb == 5)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0)
		return (0);
	n = 7;
	while (n < 47000 && n < nb)
	{
		if ((nb % n) == 0)
			return (0);
		n += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
