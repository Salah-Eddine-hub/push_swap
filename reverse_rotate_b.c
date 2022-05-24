/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:43 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:58:46 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_b(t_stack *stacks)
{
	int tmp;
	int i;
 
	if (stacks->top_b < 1)
		return ;
	tmp = stacks->stack_b[0];
	i = 0;
	while (i < stacks->top_b)
	{
		stacks->stack_b[i] = stacks->stack_b[i + 1];
		i ++;
	}
	stacks->stack_b[i] = tmp;
}
