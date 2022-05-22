/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/22 18:43:00 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_free_arr(char **arr)
{
	int i = -1;
	while (arr[++i])
		free(arr[i]);
	free(arr);
	return ;
}

int	quote_check(int argc, char **argv, t_stack *stacks)
{
	int i = 0;
	int j = 0;
	char	**av;

	while (argv[++i])
	{
		while (argc--)
		{
			av = ft_split(argv[i], ' ');
			while (av[j++]);
			ft_free_arr(av);
		}
		stacks->stack_a = malloc(sizeof(int) * j);
		j = 0;
		while (av[j])
		{
			stacks->stack_a[j] = ft_atoi(av[j]);
			j++;
		}
		ft_free_arr(av);
		break;
	}
	i = 0;
	while (i < j)
	{
		printf("%d ", stacks->stack_a[i]);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	t_stack	stacks;

	stacks.top_a = 0;
	stacks.top_b = 0;
	if (argc == 1)
		return (1);
	// quote_check(argc, argv, &stacks);
	if (!get_args(argc, argv, &stacks))
		return (ft_putendl_fd("Error\nInvalid arguments", 1), 1);
	return (0);
}
