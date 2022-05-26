/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/25 09:59:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_stack *stacks)
{
	int	tmp;
	
	if (stacks->top_b < 1)
		return ;
	tmp = stacks->stack_b[stacks->top_b - 1];
	stacks->stack_b[stacks->top_b - 1] = stacks->stack_b[stacks->top_b];
	stacks->stack_b[stacks->top_b] = tmp;
	printf("sb\n");
}
