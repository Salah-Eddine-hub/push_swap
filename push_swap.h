/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/26 11:42:34 by sharrach         ###   ########.fr       */
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
	int	*stack_a;
	int	top_a;
	int	*stack_b;
	int	top_b;
}	t_stack;

void	swap_a(t_stack *stacks);
void	swap_b(t_stack *stacks);
void	sa_sb(t_stack *stacks);
void	push_a(t_stack *stacks);
void	push_b(t_stack *stacks);
void	rotate_a(t_stack *stacks);
void    rotate_b(t_stack *stacks);
void    ra_rb(t_stack *stacks);
void    reverse_rotate_a(t_stack *stacks);
void    reverse_rotate_b(t_stack *stacks);
void    rra_rrb(t_stack *stacks);
void	sort_three(t_stack *stacks);
void    sort_five(t_stack *stacks);
int		ft_satoi(const char *str, long *nb);
char	*ft_stradd(char const *s1, char const *s2);
int		arr_len(char **arr);
void	free_program(t_stack *stacks);
int		get_args(int argc, char **argv, t_stack *stacks);

#endif