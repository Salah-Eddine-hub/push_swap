/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:27:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/02 20:19:03 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stacks *stacks)
{
	if(stacks->a.stack[2] > stacks->a.stack[1] && stacks->a.stack[2] < stacks->a.stack[0])
		if(stacks->a.stack[2] > stacks->a.stack[1])
			swap_a(stacks);
	if(stacks->a.stack[1] > stacks->a.stack[2] && stacks->a.stack[1] > stacks->a.stack[0])
	{	
		if(stacks->a.stack[0] > stacks->a.stack[2])
		{
			reverse_rotate_a(stacks);
			swap_a(stacks);
		}
		if(stacks->a.stack[2] > stacks->a.stack[0])
			reverse_rotate_a(stacks);
	}
	if(stacks->a.stack[2] > stacks->a.stack[1] && stacks->a.stack[2] > stacks->a.stack[0])
	{
		if(stacks->a.stack[0] > stacks->a.stack[1])
			rotate_a(stacks);
		if (stacks->a.stack[1] > stacks->a.stack[0])
		{
			rotate_a(stacks);
			swap_a(stacks);
		}
	}
}