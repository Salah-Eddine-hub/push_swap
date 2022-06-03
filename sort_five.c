/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:45:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 17:05:49 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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