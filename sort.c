/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:09:00 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 12:04:48 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

static	int	*copy_stack(t_stack stack, int *stack_x)
{
	int	i;

	stack_x = ft_calloc(sizeof (int), stack.top + 1);
	i = stack.top;
	while (i >= 0)
	{
		stack_x[i] = stack.stack[i];
		i --;
	}
	return (stack_x);
}

static	int	*ft_push_to_a(t_stacks *stacks, int *stack_x)
{
	int	max;
	int	idx;

	while (stacks->b.top >= 0)
	{
		max = stack_x[stacks->b.top];
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
	return (stack_x);
}

void	ft_sort_b(t_stacks *stacks, int **stack_x, t_func *var)
{
	if (stacks->b.stack[stacks->b.top] <= var->vp2 && stacks->b.top >= 1
		&& stacks->b.stack[stacks->b.top] >= var->lvp2)
		rotate_b(stacks);
	if (var->j == var->pv1 + 1)
	{
		free(*stack_x);
		*stack_x = ft_calloc(sizeof (int), stacks->a.top + 1);
		var->i = stacks->a.top;
		*stack_x = copy_stack(stacks->a, *stack_x);
		bubblesort(*stack_x, stacks->a.top);
		var->pv1 = (stacks->a.top + 1) / 3;
		var->pv2 = var->pv1 / 2;
		var->lvp2 = var->vp1;
		var->vp1 = (*stack_x)[var->pv1];
		var->vp2 = (*stack_x)[var->pv2];
		var->j = 0;
	}
	if (stacks->a.stack[stacks->a.top] <= var->vp1)
	{
		push_b(stacks);
		var->j ++;
	}
	else
		rotate_a(stacks);
}

void	sort_stacks(t_stacks *stacks)
{
	t_func	var;
	int		*stack_x;

	stack_x = ft_calloc(sizeof (int), stacks->a.top + 1);
	var.i = stacks->a.top;
	stack_x = copy_stack(stacks->a, stack_x);
	bubblesort(stack_x, stacks->a.top);
	var.pv1 = (stacks->a.top + 1) / 3;
	var.pv2 = var.pv1 / 2;
	var.vp1 = stack_x[var.pv1];
	var.vp2 = stack_x[var.pv2];
	var.lvp2 = stack_x[0];
	var.j = 0;
	while (stacks->a.top > 0)
		ft_sort_b(stacks, &stack_x, &var);
	stack_x = ft_calloc(sizeof (int), stacks->b.top + 1);
	stack_x = copy_stack(stacks->b, stack_x);
	bubblesort(stack_x, stacks->b.top + 1);
	stack_x = ft_push_to_a(stacks, stack_x);
}
