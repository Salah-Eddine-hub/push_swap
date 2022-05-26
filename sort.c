/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:00 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/26 17:32:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<push_swap.h>

static	void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
static	void bubbleSort(int arr[], int n)
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



void    new_stack(t_stack *stacks)
{
	int i;
	int	**stack_x;
	
	stack_x = ft_calloc(sizeof (int), stacks->top_a + 1);
	
	while(stacks->stack_a[i])
	{
		**stack_x = stacks->stack_a[i];
		i ++;
	}
}