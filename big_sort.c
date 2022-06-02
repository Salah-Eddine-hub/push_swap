/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:48:55 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/01 12:37:02 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_big_index(int *tab, int size)
{
	int	i;
	int	big;

	i = 0;
	big = i;
	while (i <= size)
	{
		if (tab[i] > tab[big])
			big = i;
		i++;
	}
	return (big);
}

// static	int 	nb_index(t_stack stacks, int nb)
// {
// 	int index;
	
// 	index = stacks.top;
// 	while(index >= 0)
// 	{
// 		if (stacks.stack[index] == nb)
// 			return (index);
// 		index --;	
// 	}
// 	return (-1);
// }

int	get_head_index(t_stack stack)
{
	int	*count;
	int	comp;
	int	j;
	int	i;

	count = ft_calloc (stack.top + 1, sizeof(int));
	if (!count)
		return (0);
	i = stack.top;
	while (i >= 0)
	{
		comp = stack.stack[i];
		j = dec_index(stack, i);
		while (j != i)
		{
			if (comp < stack.stack[j])
			{
				comp = stack.stack[j];
				count[i]++;
			}
			j = dec_index(stack, j);
		}
		i --;
	}
	return (free(count), get_big_index(count, stack.top));
}

int	*get_head_comp(t_stack stack)
{
	int	*flags;
	int	comp;
	int	i;
	int	j;

	flags = ft_calloc (stack.top + 1, sizeof(int));
	if (!flags)
		return (NULL);
	comp = get_head_index(stack);
	j = comp;
	i = dec_index(stack, j);
	while (i != j)
	{
		if (stack.stack[comp] <= stack.stack[i])
		{
			comp = i;
			flags[i] = 0;
		}
		else
			flags[i] = 1;
		i = dec_index(stack, i);
	}
	return (flags);
}

void	send_to_b(t_stacks *stacks, int nb)
{
	while (nb != stacks->a.stack[stacks->a.top])
	{
		if (nb_index(stacks->a, nb) >= stacks->a.top / 2)
			rotate_a(stacks);
		else
			reverse_rotate_a(stacks);
	}
	push_b(stacks);
}

void	move_a_to_b(t_stacks *stacks)
{
	int *flag;
	int	i;
	int j;

	flag = get_head_comp(stacks->a);
	i = stacks->a.top;;
	j = stacks->a.top;
	while(j >= 0)
	{
		if (flag[j] == 1)
		{
			send_to_b(stacks, stacks->a.stack[i]); 
			i = stacks->a.top;
		}
		else
			i --;
		j --;
	}
}