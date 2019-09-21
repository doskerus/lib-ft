/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sseregin <sseregin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 21:11:01 by sseregin          #+#    #+#             */
/*   Updated: 2019/09/20 13:13:18 by sseregin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		f;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			f = 1;
			while (to_find[f] != '\0' && str[i + f] == to_find[f])
				f++;
			if (to_find[f] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
