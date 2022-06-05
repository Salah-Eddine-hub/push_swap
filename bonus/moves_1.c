/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:03:08 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 19:44:46 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a.top < 1)
		return ;
	tmp = stacks->a.stack[stacks->a.top - 1];
	stacks->a.stack[stacks->a.top - 1] = stacks->a.stack[stacks->a.top];
	stacks->a.stack[stacks->a.top] = tmp;
}

void	sb(t_stacks *stacks)
{
	int	tmp;

	if (stacks->b.top < 1)
		return ;
	tmp = stacks->b.stack[stacks->b.top - 1];
	stacks->b.stack[stacks->b.top - 1] = stacks->b.stack[stacks->b.top];
	stacks->b.stack[stacks->b.top] = tmp;
}

void	ss(t_stacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
