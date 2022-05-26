/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:39 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/25 09:59:51 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_stack *stacks)
{
	int tmp;
	int i;

	if (stacks->top_a < 1)
		return ;
	tmp = stacks->stack_a[0];
	i = 0;
	while (i < stacks->top_a)
	{
		stacks->stack_a[i] = stacks->stack_a[i + 1];
		i ++;
	}
	stacks->stack_a[i] = tmp;
	printf("rra\n");
}
