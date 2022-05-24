/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/24 19:00:41 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_stacks(t_stack *stacks)
{
	printf("Stack A:\n");
	int i = stacks->top_a;
	while (i >= 0) {
		printf("%d\n", stacks->stack_a[i--]);
	}
	printf("Stack B:\n");
	i = stacks->top_b;
	while (i >= 0) {
		printf("%d\n", stacks->stack_b[i--]);
	}
}

int main(int argc, char **argv)
{
	t_stack	stacks;

	stacks.top_a = 0;
	stacks.top_b = 0;
	if (argc == 1)
		return (EXIT_FAILURE);
	if (!get_args(argc, argv, &stacks))
		return (ft_putendl_fd("Error\nInvalid arguments.", 1), 1);
	// print_stacks(&stacks);
	// push_b(&stacks);
	// sort_three(&stacks);
	// sort_five(&stacks);
	return (EXIT_SUCCESS);
}
