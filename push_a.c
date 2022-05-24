/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:37:21 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stacks)
{
	if(stacks->top_b < 0)
		return ;
	(stacks->top_a)++;
	stacks->stack_a[stacks->top_a] = stacks->stack_b[stacks->top_b];
	(stacks->top_b)--;
}
