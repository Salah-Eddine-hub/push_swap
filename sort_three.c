/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:27:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/03 17:08:42 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stacks *stacks)
{
	int nb;
	int impostor;
	int i;

	i = stacks->a.top;
	while (i >= 0)
	{
		if (stacks->a.top == 0)
			break;
		nb = stacks->a.stack[dec_index(stacks->a, i)];
		impostor = stacks->a.stack[dec_index(stacks->a, dec_index(stacks->a, i))];
		if (stacks->a.stack[i] < nb && nb > impostor)
		{
			while (impostor != stacks->a.stack[stacks->a.top])
			{
				if (nb_index(stacks->a, impostor) >= stacks->a.top / 2)
					rotate_a(stacks);
				else
					reverse_rotate_a(stacks);
			}
			if(!is_sorted(stacks))
				swap_a(stacks);
			break ;
		}
		i = dec_index(stacks->a, i);
	}
	while (find_the_smallest(stacks->a) != stacks->a.stack[stacks->a.top])
	{
		if (nb_index(stacks->a, find_the_smallest(stacks->a)) >= stacks->a.top / 2)
			rotate_a(stacks);
		else
			reverse_rotate_a(stacks);
	}
}

// if(stacks->a.stack[2] > stacks->a.stack[1] && stacks->a.stack[2] < stacks->a.stack[0])
	// {
	// 	if(stacks->a.stack[0] > stacks->a.stack[1])
	// 		rotate_a(stacks);
	// 	if(stacks->a.stack[0] > stacks->a.stack[1])
	// 	{
	// 		swap_a(stacks);
	// 		reverse_rotate_a(stacks);
	// 	}
	// }
	// if(stacks->a.stack[1] > stacks->a.stack[2] && stacks->a.stack[1] > stacks->a.stack[0])
	// {	
	// 	if(stacks->a.stack[0] > stacks->a.stack[2])
	// 		reverse_rotate_a(stacks);
	// 	if(stacks->a.stack[0] < stacks->a.stack[2])
	// 		{
	// 			swap_a(stacks);
	// 			reverse_rotate_a(stacks);
	// 		}
	// }
	// if(stacks->a.stack[0] > stacks->a.stack[1] && stacks->a.stack[0] > stacks->a.stack[2])
	// 	if(stacks->a.stack[2] > stacks->a.stack[1])
	// 		swap_a(stacks);
