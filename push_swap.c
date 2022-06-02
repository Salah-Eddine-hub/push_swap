/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/02 18:52:04 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	print_stacks(t_stacks *stacks)
{
	printf("Stack A:\n");
	int i = stacks->a.top;
	while (i >= 0) {
		printf("%d\n", stacks->a.stack[i--]);
	}
	printf("Stack B:\n");
	i = stacks->b.top;
	while (i >= 0) {
		printf("%d\n", stacks->b.stack[i--]);
	}
}

int	is_sorted(t_stacks *stacks)
{
	while (stacks->a.top > 0
		&& stacks->a.stack[stacks->a.top] <= stacks->a.stack[stacks->a.top - 1])
		stacks->a.top--;
	if (!stacks->a.top)
		return (1);
	return (0);
}

void	which_sort(t_stacks *stacks)
{
	if (stacks->a.top <= 2)
		sort_three(stacks);
	else if (stacks->a.top > 2 && stacks->a.top < 5)
		sort_five(stacks);
	else
		sort_stacks(stacks);
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
	print_stacks(&stacks);
	if(!is_sorted(&stacks))
		which_sort(&stacks);
	print_stacks(&stacks);
	free(stacks.a.stack);
	free(stacks.b.stack);
	return (EXIT_SUCCESS);
}
