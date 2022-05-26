/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:08 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/25 09:59:40 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_stack *stacks)
{
	int	tmp;
	int i;

	if (stacks->top_b < 1)
		return ;
	tmp = stacks->stack_b[stacks->top_b];
	i = stacks->top_b;
	while(i > 0)
	{
		stacks->stack_b[i] = stacks->stack_b[i - 1];
		i --;
	}
	stacks->stack_b[i] = tmp;
	printf("rb\n");
}