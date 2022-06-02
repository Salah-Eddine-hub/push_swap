/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:45:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/02 20:12:53 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	find_the_smallest(t_stacks *stacks)
{
	int i;
	int j;
	int num;

	i = stacks->a.top;
	while (i >= 0)
	{
		num = stacks->a.stack[i];
		j = stacks->a.top;
		while (j >= 0)
		{
			if (stacks->a.stack[j] < num)
				num = stacks->a.stack[j];
			j--;	
		}
		i--;
	}
	return (num);
}

static	int	find_index_of_smallest(t_stacks *stacks)
{
	int j;
	int num;

	num = find_the_smallest(stacks);
	j = stacks->a.top;
	while (j >= 0)
	{
		if (stacks->a.stack[j] == num)
			return (j);
		j--;
	}
	return (stacks->a.top);
}

void    sort_five(t_stacks *stacks)
{
	int j;
	int index;
	
	j = 0;	
	while (j < 2)
	{
		index = find_index_of_smallest(stacks);
		if (index > stacks->a.top / 2)
		{
			while (index < stacks->a.top)
			{
				rotate_a(stacks);			
				index++;	
			}
		}
		else if (index <= stacks->a.top / 2)
		{
			while (index >= 0)
			{
				reverse_rotate_a(stacks);
				index--;
			}
		}
		push_b(stacks);
		j++;
	}	
	sort_three(stacks);
	push_a(stacks);
	push_a(stacks);
}