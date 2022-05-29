/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:00 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:35:21 by sharrach         ###   ########.fr       */
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
	int pv2;
	int n;
	
	n = 0;
	stacks->stack_x = ft_calloc(sizeof (int), stacks->a.top + 1);
	i = 0;
	while(stacks->a.stack[i])
	{
		stacks->stack_x[i] = stacks->a.stack[i];
		i ++;
	}
	bubblesort(stacks->stack_x, n);
	pv1 = stacks->a.stack[i] / 3;
	pv2 = pv1 / 2;
	j = 0;
	while(stacks->a.stack[j] != 1)
	{
		if(stacks->a.top <= pv1)
		{
			push_b(stacks);
			j ++;
		}
		if(stacks->b.top <= pv2)
			rotate_b(stacks);
		else
			rotate_a(stacks);
		j ++;
	}
	
}