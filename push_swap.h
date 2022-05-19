/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:10:27 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/19 13:03:57 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_stack{
	int	*stack_a;
	int	*stack_b;
}   t_stack;

int		get_args(int argc, char **argv, t_stack *stacks, int *top_a);
void	swap_a(t_stack *stacks, int *top_a);
void	swap_b(t_stack *stacks, int *top_b);
void	sa_sb(t_stack *stacks, int *top_a, int *top_b);
void	push_a(t_stack *stacks, int *top_a, int *top_b);
void	push_b(t_stack *stacks, int *top_a, int *top_b);

#endif