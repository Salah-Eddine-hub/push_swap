/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:00:41 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/18 10:21:53 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	isdup(t_stack *stacks, long long num, int ref)
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

static	int	check_error(t_stack *stacks, long long num, int ref)
{
	if (num == -1 || !isdup(stacks, num, ref)
		|| num > 2147483647 || num < -2147483648)
	{
		write(2, "Error\n", 6);
		free(stacks->stack_a);
		free(stacks->stack_b);
		return (1);
	}
	return (0);
}

int	get_args(int argc, char **argv, t_stack *stacks, int *top_a)
{
	long long	num;
	int			i;

	*top_a = argc - 2;
	stacks->stack_a = ft_calloc (sizeof(int), (argc - 1));
	stacks->stack_b = ft_calloc (sizeof(int), (argc - 1));
	argc--;
	i = 0;
	while (i <= *top_a)
	{
		num = ft_atoi(argv[argc--]);
		if (check_error(stacks, num, i))
			return (0);
		stacks->stack_a[i++] = num;
	}
	return (1);
}