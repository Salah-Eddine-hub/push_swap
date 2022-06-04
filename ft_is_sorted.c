/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:56:45 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:14:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stacks *stacks)
{
	int	size;
	int	end;

	size = nb_index(stacks->a, find_the_smallest(stacks->a));
	end = inc_index(stacks->a, size);
	while (stacks->a.stack[size] != stacks->a.stack[end])
	{
		if (stacks->a.stack[size] > stacks->a.stack[dec_index(stacks->a, size)])
			return (0);
		size = dec_index(stacks->a, size);
	}
	return (1);
}
