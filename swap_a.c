/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:19 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/13 19:01:44 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stacks, int *top_a)
{
	int	tmp;

	tmp = stacks->stack_a;
	stacks->stack_b = tmp;
	stacks->stack_b = stacks->stack_a;
}