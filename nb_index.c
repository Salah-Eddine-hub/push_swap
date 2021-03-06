/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:57:44 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:18:22 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_index(t_stack stacks, int nb)
{
	int	index;

	index = stacks.top;
	while (index >= 0)
	{
		if (stacks.stack[index] == nb)
			return (index);
		index --;
	}
	return (-1);
}
