/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:19 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:37:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stacks, int top_a)
{
	int	tmp;
	
	if (stacks->stack_a[top_a] <= 1)
		return ;
	tmp = stacks->stack_a[top_a -1];
	stacks->stack_a[top_a -1] = stacks->stack_a[top_a];
	stacks->stack_a[top_a] = tmp;
}
