/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:05:29 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/02 18:05:55 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void bubblesort(int *arr, int n)
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
