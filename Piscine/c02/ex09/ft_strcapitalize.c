/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:38:19 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/15 20:17:38 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lowcase(char *str)
{
	int i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int		ft_is_letter(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int a;

	a = 1;
	ft_lowcase(str);
	while (str[a] != '\0')
	{
		if (ft_is_letter(str[a]))
		{
			if (!(ft_is_letter(str[a - 1])))
			{
				if (!(str[a] >= '0' && str[a] <= '9'))
					str[a] -= 32;
			}
		}
		a++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	return (str);
}
