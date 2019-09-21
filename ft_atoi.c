/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseregin <sseregin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 20:57:31 by sseregin          #+#    #+#             */
/*   Updated: 2019/09/20 12:40:15 by sseregin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		integer;
	int		sign;
	int		i;

	integer = 0;
	sign = 1;
	i = 0;
	while (str[i] != '\0' && str[i] >= 0 && str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		integer = (integer * 10) + (str[i] - 48);
		i++;
	}
	return (integer * sign);
}
