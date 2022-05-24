/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:00:41 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 18:33:56 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**split_args(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**arr;

	str = ft_strdup("");
	i = 1;
	while(i < argc)
	{
		str = ft_stradd(str, argv[i]);
		str = ft_stradd(str, " ");
		i ++;
	}
	arr = ft_split(str, ' ');
	free(str);
	return (arr);
}

static	int	check_duplicate(t_stack *stacks, long num, int ret)
{
	int	i;

	if (ret == 0)
		return (1);
	i = 0;
	while (stacks->stack_a[i] != num && i < ret)
		i++;
	if (i == ret)
		return (1);
	return (0);
}

static	int	check_error(t_stack *stacks, long num, int ret)
{
	if (!check_duplicate(stacks, num, ret)
		|| num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	get_args(int argc, char **argv, t_stack *stacks)
{
	long	num;
	int		i;
	char	**arr;

	arr = split_args(argc, argv);
	stacks->top_a = arr_len(arr) - 1;
	stacks->stack_a = ft_calloc (sizeof(int), arr_len(arr));
	stacks->top_b = -1;
	stacks->stack_b = ft_calloc (sizeof(int), arr_len(arr));
	argc -= 2;
	i = 0;
	while (i <= stacks->top_a)
	{
		if (arr[argc][0] == '\0' || !ft_satoi(arr[argc], &num))
			return (free_program(stacks), 0);
		if (check_error(stacks, num, i))
			return (free_program(stacks), 0);
		stacks->stack_a[i++] = num;
		argc --;
	}
	return (1);
}
