/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:00 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/31 17:34:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static	void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
static	void bubblesort(int arr[], int n)
{
    int	i;
	int	j;

	i = 0;
    while (i < n - 1)
	{
		j = 0;
        while (j < n - i - 1)
		{
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
			j ++;
		}
		i ++;
	}
}

void    sort_stacks(t_stacks *stacks)
{
	int i;
	int j;
	int pv1;
	int *stack_x;
	int pv2;
	int	vp1;
	int vp2;
	int	lvp2;
	
	stack_x = ft_calloc(sizeof (int), stacks->a.top + 1);
	i = stacks->a.top;
	while(i >= 0)
	{
		stack_x[i] = stacks->a.stack[i];
		i --;
	}
	bubblesort(stack_x, stacks->a.top);
	pv1 = (stacks->a.top + 1) / 3;
	pv2 = pv1 / 2;
	vp1 = stack_x[pv1];
	vp2 = stack_x[pv2];
	lvp2 = stack_x[0];
	j = 0;
	while(stacks->a.top > 0)
	{
	// 	if (j == 0)
	// 	{
	// printf("%d\n", pv1);
	// printf("%d\n", pv2);
	// printf("%d\n", vp1);
	// printf("%d\n", vp2);
			
	// 	}
		if(stacks->b.stack[stacks->b.top] <= vp2 && stacks->b.top >= 1 && stacks->b.stack[stacks->b.top] >= lvp2)
			rotate_b(stacks);
		if (j == pv1 + 1)
		{
			free(stack_x);
			stack_x = ft_calloc(sizeof (int), stacks->a.top + 1);
			i = stacks->a.top;
			while(i >= 0)
			{
				stack_x[i] = stacks->a.stack[i];
				i --;
			}
			bubblesort(stack_x, stacks->a.top);
			pv1 = (stacks->a.top + 1)/ 3;
			pv2 = pv1 / 2;
			lvp2 = vp1;
			vp1 = stack_x[pv1];
			vp2 = stack_x[pv2];
			j = 0;
		}
		if(stacks->a.stack[stacks->a.top] <= vp1)
		{
			push_b(stacks);
			j ++;
		}
		else
			rotate_a(stacks);
			// sleep(1);
	}
	stack_x = ft_calloc(sizeof (int), stacks->b.top + 1);
	i = stacks->b.top;
	while(i >= 0)
	{
		stack_x[i] = stacks->b.stack[i];
		i --;
	}
	bubblesort(stack_x, stacks->b.top + 1);
	while (stacks->b.top >= 0)
	{
		int	max;
		int	idx;
	
		max = stack_x[stacks->b.top];
		// for(int k = stacks->b.top; k >= 0; k--)
			// printf("[%d]\n", stack_x[k]);
		idx = nb_index(stacks->b, max);
		if (idx > (stacks->b.top / 2))
		{
			while (stacks->b.stack[stacks->b.top] != max)
				rotate_b(stacks);
		}
		else if (idx <= (stacks->b.top / 2))
		{
			while (stacks->b.stack[stacks->b.top] != max)
				reverse_rotate_b(stacks);
		}
		push_a(stacks);
	}
}