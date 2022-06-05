/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:12:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 19:44:27 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_stacks *stacks)
{
	int	tmp;
	int	i;

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
}

void	rrb(t_stacks *stacks)
{
	int	tmp;
	int	i;

	if (stacks->b.top < 1)
		return ;
	tmp = stacks->b.stack[0];
	i = 0;
	while (i < stacks->b.top)
	{
		stacks->b.stack[i] = stacks->b.stack[i + 1];
		i ++;
	}
	stacks->b.stack[i] = tmp;
}

void	rrr(t_stacks *stacks)
{
	rra(stacks);
	rrb(stacks);
}
