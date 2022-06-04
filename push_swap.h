/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:54:03 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_stack {
	int	*stack;
	int	top;
}	t_stack;

typedef struct s_stacks {
	t_stack	a;
	t_stack	b;
}	t_stacks;

typedef struct vars{
	int	i;
	int	j;
	int	pv1;
	int	pv2;
	int	vp1;
	int	vp2;
	int	lvp2;
}	t_func;

void	swap_a(t_stacks *stacks);
void	swap_b(t_stacks *stacks);
void	sa_sb(t_stacks *stacks);
void	push_a(t_stacks *stacks);
void	push_b(t_stacks *stacks);
void	rotate_a(t_stacks *stacks);
void	rotate_b(t_stacks *stacks);
void	ra_rb(t_stacks *stacks);
void	reverse_rotate_a(t_stacks *stacks);
void	reverse_rotate_b(t_stacks *stacks);
void	rra_rrb(t_stacks *stacks);
int		ft_satoi(const char *str, long *nb);
int		is_sorted(t_stacks *stacks);
void	sort_three(t_stacks *stacks);
void	sort_five(t_stacks *stacks);
void	sort_stacks(t_stacks *stacks);
char	*ft_stradd(char const *s1, char const *s2);
int		arr_len(char **arr);
void	bubblesort(int *arr, int n);
void	free_program(t_stacks *stacks);
int		find_the_smallest(t_stack stacks);
int		find_index_of_smallest(t_stacks *stacks);
void	ft_putstr(char *str);
int		*get_head_comp(t_stack stack);
int		get_head_index(t_stack stack);
void	send_to_b(t_stacks *stacks, int nb);
void	move_a_to_b(t_stacks *stacks);
int		dec_index(t_stack stack, int index);
int		inc_index(t_stack stack, int index);
int		get_args(int argc, char **argv, t_stacks *stacks);
int		nb_index(t_stack stacks, int nb);

#endif