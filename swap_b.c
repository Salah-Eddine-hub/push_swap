/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:39:21 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_stack *stacks, int top_b)
{
	int tmp;

	if (stacks->stack_b[top_b] <= 1)
	return ;
	tmp = stacks->stack_b[top_b -1];
	stacks->stack_b[top_b - 1] = stacks->stack_b[top_b];
	stacks->stack_b[top_b] = tmp;
}
