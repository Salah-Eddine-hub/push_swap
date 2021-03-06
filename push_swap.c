/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 15:15:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// static void	print_stacks(t_stacks *stacks)
// {
// 	printf("Stack A:\n");
// 	int i = stacks->a.top;
// 	while (i >= 0) {
// 		printf("%d\n", stacks->a.stack[i--]);
// 	}
// 	printf("Stack B:\n");
// 	i = stacks->b.top;
// 	while (i >= 0) {
// 		printf("%d\n", stacks->b.stack[i--]);
// 	}
// }

void	which_sort(t_stacks *stacks)
{
	if (stacks->a.top <= 2)
		sort_three(stacks);
	else if (stacks->a.top > 2 && stacks->a.top < 5)
		sort_five(stacks);
	else if (stacks->a.top > 4 && stacks->a.top <= 100)
		sort_stacks(stacks, 3);
	else
		sort_stacks(stacks, 5);
}

int	main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.a.top = 0;
	stacks.b.top = 0;
	if (argc == 1)
		return (EXIT_FAILURE);
	if (!get_args(argc, argv, &stacks))
		return (ft_putstr("Error\nInvalid arguments."), 1);
	which_sort(&stacks);
	free_program(&stacks);
	return (EXIT_SUCCESS);
}
