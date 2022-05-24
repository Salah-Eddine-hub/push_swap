/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:48 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:58:24 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stacks)
{
	int	tmp;
	int i;

	if (stacks->top_a < 1)
		return ;
	tmp = stacks->stack_a[stacks->top_a];
	i = stacks->top_a;
	while(i > 0)
	{
		stacks->stack_a[i] = stacks->stack_a[i - 1];
		i --;
	}
	stacks->stack_a[i] = tmp;
}
