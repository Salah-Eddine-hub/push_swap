/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:27:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:33:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stacks)
{
	// for (int i = stacks->top_a; i >= 0; i--)
	// 	printf("a[%d] = %d\n", i, stacks->stack_a[i]);
	// printf("-------------------------\n");
	if(stacks->stack_a[2] > stacks->stack_a[1] && stacks->stack_a[2] < stacks->stack_a[0])
		if(stacks->stack_a[2] > stacks->stack_a[1])
			swap_a(stacks);
	if(stacks->stack_a[1] > stacks->stack_a[2] && stacks->stack_a[1] > stacks->stack_a[0])
	{	
		if(stacks->stack_a[0] > stacks->stack_a[2])
		{
			reverse_rotate_a(stacks);
			swap_a(stacks);
		}
		if(stacks->stack_a[2] > stacks->stack_a[0])
			reverse_rotate_a(stacks);
	}
	if(stacks->stack_a[2] > stacks->stack_a[1] && stacks->stack_a[2] > stacks->stack_a[0])
	{
		if(stacks->stack_a[0] > stacks->stack_a[1])
			rotate_a(stacks);
		if (stacks->stack_a[1] > stacks->stack_a[0])
		{
			rotate_a(stacks);
			swap_a(stacks);
		}
	}
}