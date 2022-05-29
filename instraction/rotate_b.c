/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:08 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:35:21 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_b(t_stacks *stacks)
{
	int	tmp;
	int i;

	if (stacks->b.top < 1)
		return ;
	tmp = stacks->b.stack[stacks->b.top];
	i = stacks->b.top;
	while(i > 0)
	{
		stacks->b.stack[i] = stacks->b.stack[i - 1];
		i --;
	}
	stacks->b.stack[i] = tmp;
	printf("rb\n");
}