/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:31:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 20:00:23 by sharrach         ###   ########.fr       */
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
		{
			free_program(stacks);
			return (0);
		}
		stacks->a.stack[i++] = num;
		argc --;
	}
	return (1);
}

int	ft_is_sorted(t_stacks *stacks)
{
	int	size;
	int	end;

	size = nb_index(stacks->a, find_the_smallest(stacks->a));
	end = inc_index(stacks->a, size);
	while (stacks->a.stack[size] != stacks->a.stack[end])
	{
		if (stacks->a.stack[size] > stacks->a.stack[dec_index(stacks->a, size)])
			return (0);
		size = dec_index(stacks->a, size);
	}
	return (1);
}

int main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.a.top = 0;
	stacks.b.top = 0;
	if (argc == 1)
		return (EXIT_FAILURE);
	if (!get_args(argc, argv, &stacks))
		return (ft_putendl_fd("Error\nInvalid arguments.", 1), 1);
	if (get_moves(&stacks))
	{
		if (ft_is_sorted(&stacks) && stacks.b.top == -1)
			ft_putendl_fd("OK", 1);
		else
			ft_putendl_fd("KO", 1);
	}
	free(stacks.a.stack);
	free(stacks.b.stack);
	return (EXIT_SUCCESS);
}