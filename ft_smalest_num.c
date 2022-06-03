/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smalest_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 16:55:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 17:06:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_the_smallest(t_stack stack)
{
	int i;
	int j;
	int num;

	i = stack.top;
	while (i >= 0)
	{
		num = stack.stack[i];
		j = stack.top;
		while (j >= 0)
		{
			if (stack.stack[j] < num)
				num = stack.stack[j];
			j--;	
		}
		i--;
	}
	return (num);
}

int	find_index_of_smallest(t_stacks *stacks)
{
	int j;
	int num;

	num = find_the_smallest(stacks->a);
	j = stacks->a.top;
	while (j >= 0)
	{
		if (stacks->a.stack[j] == num)
			return (j);
		j--;
	}
	return (stacks->a.top);
}