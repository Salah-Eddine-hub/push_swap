/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_satoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 16:10:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 16:30:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	check_sign(const char *str, size_t *i, int *sign)
{
	if (str[*i] == '-' || str[*i] == '+' )
	{
		if (str[*i] == '-')
			(*sign) *= -1;
		(*i)++;
	}
}

int	ft_satoi(const char *str, long *nb)
{
	size_t	i;
	int		sign;
	int		error;

	i = 0;
	sign = 1;
	error = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	check_sign(str, &i, &sign);
	*nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		*nb = (*nb * 10) + str[i] - 48;
		error = 1;
		i++;
	}
	*nb *= sign;
	if (i != ft_strlen(str))
		return (0);
	return (error);
}
