/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:36:16 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_b(t_stacks *stacks)
{
	if(stacks->a.top < 0)
		return ;
	(stacks->b.top)++;
	stacks->b.stack[stacks->b.top] = stacks->a.stack[stacks->a.top];
	(stacks->a.top)--;
	printf("pb\n");
}
