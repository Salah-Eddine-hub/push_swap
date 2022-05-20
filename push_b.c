/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:16:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stack *stacks, int *top_a, int *top_b)
{
	if(stacks->stack_a == 0)
		return ;
	(*top_b)++;
	stacks->stack_b[*top_b] = stacks->stack_a[*top_a];
	(*top_a)--;
}