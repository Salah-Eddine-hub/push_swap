/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:45:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 12:30:38 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_two_num(t_stacks *stacks)
{
	int	index;

	index = find_index_of_smallest(stacks);
	if (index > stacks->a.top / 2)
	{
		while (index < stacks->a.top)
		{
			rotate_a(stacks);
			index++;
		}
	}
	else if (index <= stacks->a.top / 2)
	{
		while (index >= 0)
		{
			reverse_rotate_a(stacks);
			index--;
		}
	}
	push_b(stacks);
}

void	sort_five(t_stacks *stacks)
{
	int	j;

	j = 0;
	while (j < 2)
	{
		push_two_num(stacks);
		j++;
	}	
	sort_three(stacks);
	push_a(stacks);
	push_a(stacks);
}
