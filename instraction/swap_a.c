/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:19 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:08:19 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap_a(t_stacks *stacks)
{
	int	tmp;

	if (stacks->a.top < 1)
		return ;
	tmp = stacks->a.stack[stacks->a.top - 1];
	stacks->a.stack[stacks->a.top - 1] = stacks->a.stack[stacks->a.top];
	stacks->a.stack[stacks->a.top] = tmp;
	ft_putstr("sa\n");
}
