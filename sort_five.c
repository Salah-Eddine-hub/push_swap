/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:45:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/26 13:18:27 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	find_the_smallest(t_stack *stacks)
{
	int i;
	int j;
	int num;

	i = stacks->top_a;
	while (i >= 0)
	{
		num = stacks->stack_a[i];
		j = stacks->top_a;
		while (j >= 0)
		{
			if (stacks->stack_a[j] < num)
				num = stacks->stack_a[j];
			j--;	
		}
		i--;
	}
	return (num);
}
static	int	find_index_of_smallest(t_stack *stacks)
{
	int j;
	int num;

	num = find_the_smallest(stacks);
	j = stacks->top_a;
	while (j >= 0)
	{
		if (stacks->stack_a[j] == num)
			return (j);
		j--;
	}
	return (stacks->top_a);
}
void    sort_five(t_stack *stacks)
{
	int i;
	int j;
	int index;
	
	// printf("small number is: %d\n",find_the_smallest(stacks));
	// printf("it index is: %d\n",find_index_of_smallest(stacks));
	j = 0;	
	while (j < 2)
	{
		index = find_index_of_smallest(stacks);
		if (index > stacks->top_a / 2)
		{
			while (index < stacks->top_a)
			{
				rotate_a(stacks);			
				index++;	
			}
		}
		else if (index <= stacks->top_a / 2)
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
	
	printf("----------------------------\n");
	for (i = stacks->top_b; i >= 0; i--)
		printf("b[%d] = %d\n", i, stacks->stack_b[i]);
		
	sort_three(stacks);
	push_a(stacks);
	push_a(stacks);
		
	printf("----------------------------\n");
	for (i = stacks->top_a; i >= 0; i--)
		printf("a[%d] = %d\n", i, stacks->stack_a[i]);
	
}