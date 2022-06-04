/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:27:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 15:42:29 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	imposter_to_top(t_stacks *stacks, int *nb)
{
	int	ip;
	int	i;

	i = stacks->a.top;
	while (i >= 0)
	{
		if (stacks->a.top == 0)
			break ;
		*nb = stacks->a.stack[dec_index(stacks->a, i)];
		ip = stacks->a.stack[dec_index(stacks->a, dec_index(stacks->a, i))];
		if (stacks->a.stack[i] < *nb && *nb > ip)
		{
			while (ip != stacks->a.stack[stacks->a.top])
			{
				if (nb_index(stacks->a, ip) >= stacks->a.top / 2)
					rotate_a(stacks);
				else
					reverse_rotate_a(stacks);
			}
			if (!is_sorted(stacks))
				swap_a(stacks);
			break ;
		}
		i = dec_index(stacks->a, i);
	}
}

void	sort_three(t_stacks *stacks)
{
	int	nb;

	imposter_to_top(stacks, &nb);
	while (find_the_smallest(stacks->a)
		!= stacks->a.stack[stacks->a.top])
	{
		if (nb_index(stacks->a, find_the_smallest(stacks->a))
			>= stacks->a.top / 2)
			rotate_a(stacks);
		else
			reverse_rotate_a(stacks);
	}
}
