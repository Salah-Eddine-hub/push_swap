/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/18 10:08:33 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_b(t_stack *stacks, int *top_b)
{
	int tmp;

	tmp = stacks->stack_b[*top_b -1];
	stacks->stack_b[*top_b - 1] = stacks->stack_b[*top_b];
	stacks->stack_b[*top_b] = tmp;
}
