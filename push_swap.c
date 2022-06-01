/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/31 17:35:02 by sharrach         ###   ########.fr       */
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

int main(int argc, char **argv)
{
	t_stacks	stacks;

	stacks.a.top = 0;
	stacks.b.top = 0;
	if (argc == 1)
		return (EXIT_FAILURE);
	if (!get_args(argc, argv, &stacks))
		return (ft_putendl_fd("Error\nInvalid arguments.", 1), 1);
	// printf("%d\n", stacks.stack_a[1]);
	// printf("%d\n", find_key_nbr(stacks.stack_x, stacks.top_a));
	// print_stacks(&stacks);
	sort_stacks(&stacks);
	// move_a_to_b(&stacks);
	// print_stacks(&stacks);
	return (EXIT_SUCCESS);
}
