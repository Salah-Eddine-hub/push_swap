/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:05:41 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 19:44:39 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stacks *stacks)
{
	int	tmp;
	int	i;

	if (stacks->a.top < 1)
		return ;
	tmp = stacks->a.stack[stacks->a.top];
	i = stacks->a.top;
	while (i > 0)
	{
		stacks->a.stack[i] = stacks->a.stack[i - 1];
		i --;
	}
	stacks->a.stack[i] = tmp;
}

void	rb(t_stacks *stacks)
{
	int	tmp;
	int	i;

	if (stacks->b.top < 1)
		return ;
	tmp = stacks->b.stack[stacks->b.top];
	i = stacks->b.top;
	while (i > 0)
	{
		stacks->b.stack[i] = stacks->b.stack[i - 1];
		i --;
	}
	stacks->b.stack[i] = tmp;
}

void	rr(t_stacks *stacks)
{
	ra(stacks);
	rb(stacks);
}

void	pa(t_stacks *stacks)
{
	if (stacks->b.top < 0)
		return ;
	(stacks->a.top)++;
	stacks->a.stack[stacks->a.top] = stacks->b.stack[stacks->b.top];
	(stacks->b.top)--;
}

void	pb(t_stacks *stacks)
{
	if (stacks->a.top < 0)
		return ;
	(stacks->b.top)++;
	stacks->b.stack[stacks->b.top] = stacks->a.stack[stacks->a.top];
	(stacks->a.top)--;
}
