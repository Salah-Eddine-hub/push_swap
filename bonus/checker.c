/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:31:40 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/06 15:48:55 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_is_sorted(t_stacks *stacks)
{
	int	i;

	i = stacks->a.top;
	while (i > 0)
	{
		if (stacks->a.stack[i] > stacks->a.stack[i - 1])
			return (0);
		i--;
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