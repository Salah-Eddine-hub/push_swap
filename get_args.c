/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:00:41 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/22 18:31:04 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	check_duplicate(t_stack *stacks, long num, int ref)
{
	int	i;

	i = 0;
	if (ref == 0)
		return (1);
	while (stacks->stack_a[i] != num && i < ref)
		i++;
	if (i == ref)
		return (1);
	return (0);
}

static	int	check_error(t_stack *stacks, long num, int ref)
{
	if (!check_duplicate(stacks, num, ref)
		|| num > INT_MAX || num < INT_MIN)
	{
		free_program(stacks);
		return (1);
	}
	return (0);
}

int	get_args(int argc, char **argv, t_stack *stacks)
{
	long	num;
	int		i;

	stacks->top_a = argc - 2;
	stacks->stack_a = ft_calloc (sizeof(int), (argc - 1));
	stacks->stack_b = ft_calloc (sizeof(int), 1);
	argc--;
	i = 0;
	while (i <= stacks->top_a)
	{
		if (argv[argc][0] == '\0' || !ft_satoi(argv[argc], &num))
			return (0);
		if (check_error(stacks, num, i))
			return (0);
		stacks->stack_a[i++] = num;
		argc--;
	}
	return (1);
}
