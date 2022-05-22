/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_satoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:10:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/22 12:34:58 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_satoi(const char *str, long *nb)
{
	size_t	i;
	int		sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		*nb = (*nb * 10) + str[i] - 48;
		i++;
	}
	*nb *= sign;
	if (i != ft_strlen(str))
		return (0);
	return (1);
}
