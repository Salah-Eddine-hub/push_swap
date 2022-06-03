/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 16:52:12 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_b(t_stacks *stacks)
{
	int	tmp;
	
	if (stacks->b.top < 1)
		return ;
	tmp = stacks->b.stack[stacks->b.top - 1];
	stacks->b.stack[stacks->b.top - 1] = stacks->b.stack[stacks->b.top];
	stacks->b.stack[stacks->b.top] = tmp;
	ft_putstr("sb\n");
}
