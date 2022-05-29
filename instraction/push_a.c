/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:35:46 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stacks *stacks)
{
	if(stacks->b.top < 0)
		return ;
	(stacks->a.top)++;
	stacks->a.stack[stacks->a.top] = stacks->b.stack[stacks->b.top];
	(stacks->b.top)--;
	printf("pa\n");
}