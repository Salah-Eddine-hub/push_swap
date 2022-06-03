/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:27:18 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 16:51:01 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char  *str)
{
	int i;

	i = 0;
	// if (str == NULL)
	// {
	//     write (1, 'null', 6);
	// }
	while(str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}