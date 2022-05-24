/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:19 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:38:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stacks)
{
	int	tmp;
	
	if (stacks->top_a < 1)
		return ;
	tmp = stacks->stack_a[stacks->top_a - 1];
	stacks->stack_a[stacks->top_a - 1] = stacks->stack_a[stacks->top_a];
	stacks->stack_a[stacks->top_a] = tmp;
}
