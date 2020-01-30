/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbuisser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 11:05:26 by hbuisser          #+#    #+#             */
/*   Updated: 2019/08/21 08:24:49 by hbuisser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		i;
	int		j;
	int		tmp;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		tmp = i;
		j = 0;
		ptr = &str[i];
		while (str[i] == to_find[j] && str[i])
		{
			if (to_find[j + 1] == '\0')
				return (ptr);
			i++;
			j++;
		}
		i = tmp;
		i++;
	}
	return (0);
}
