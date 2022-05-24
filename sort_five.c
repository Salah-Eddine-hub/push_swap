/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:45:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:33:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_five(t_stack *stacks)
{
	push_b(stacks);
	push_b(stacks);
	sort_three(stacks);
	if (stacks->stack_b[0] > stacks->stack_b[1])
		swap_b(stacks);
	push_a(stacks);
	push_a(stacks);
	for (int i = stacks->top_a; i >= 0; i--)
		printf("a[%d] = %d\n", i, stacks->stack_a[i]);

}