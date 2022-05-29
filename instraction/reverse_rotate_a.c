/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:39 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:35:21 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate_a(t_stacks *stacks)
{
	int tmp;
	int i;

	if (stacks->a.top < 1)
		return ;
	tmp = stacks->a.stack[0];
	i = 0;
	while (i < stacks->a.top)
	{
		stacks->a.stack[i] = stacks->a.stack[i + 1];
		i ++;
	}
	stacks->a.stack[i] = tmp;
	printf("rra\n");
}
