/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/26 11:42:47 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_stack *stacks)
{
	if(stacks->top_a < 0)
		return ;
	(stacks->top_b)++;
	stacks->stack_b[stacks->top_b] = stacks->stack_a[stacks->top_a];
	(stacks->top_a)--;
	printf("pb\n");
}
