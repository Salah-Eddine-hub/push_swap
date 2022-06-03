/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:48 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 16:51:58 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate_a(t_stacks *stacks)
{
	int	tmp;
	int i;

	if (stacks->a.top < 1)
		return ;
	tmp = stacks->a.stack[stacks->a.top];
	i = stacks->a.top;
	while(i > 0)
	{
		stacks->a.stack[i] = stacks->a.stack[i - 1];
		i --;
	}
	stacks->a.stack[i] = tmp;
	ft_putstr("ra\n");
}
