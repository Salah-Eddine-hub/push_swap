/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ckeck_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:46:43 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/06 15:47:39 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	**split_args(int argc, char **argv)
{
	int		i;
	char	*str;
	char	**arr;

	str = ft_strdup("");
	i = 1;
	while (i < argc)
	{
		str = ft_stradd(str, argv[i]);
		str = ft_stradd(str, " ");
		i ++;
	}
	arr = ft_split(str, ' ');
	free(str);
	return (arr);
}

static	int	check_duplicate(t_stacks *stacks, long num, int ret)
{
	int	i;

	if (ret == 0)
		return (1);
	i = 0;
	while (stacks->a.stack[i] != num && i < ret)
		i++;
	if (i == ret)
		return (1);
	return (0);
}

static	int	check_error(t_stacks *stacks, long num, int ret)
{
	if (!check_duplicate(stacks, num, ret)
		|| num > INT_MAX || num < INT_MIN)
		return (1);
	return (0);
}

int	get_args(int argc, char **argv, t_stacks *stacks)
{
	long	num;
	int		i;
	char	**arr;

	arr = split_args(argc, argv);
	if (stacks->a.top == -1)
		return (free_program(stacks), 0);
	stacks->a.top = arr_len(arr) - 1;
	stacks->a.stack = ft_calloc (sizeof(int), arr_len(arr));
	stacks->b.top = -1;
	stacks->b.stack = ft_calloc (sizeof(int), arr_len(arr));
	argc = stacks->a.top;
	i = 0;
	while (i <= stacks->a.top)
	{
		if (!ft_satoi(arr[argc], &num) || check_error(stacks, num, i))
			return (free2d(arr), free_program(stacks), 0);
		stacks->a.stack[i++] = num;
		argc --;
	}
	return (free2d(arr), 1);
}