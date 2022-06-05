/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:31:43 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 20:00:34 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"
# include "../push_swap.h"
# include "getnextline/get_next_line.h"

void	sa(t_stacks *stacks);
void	sb(t_stacks *stacks);
void	ss(t_stacks *stacks);
void	ra(t_stacks *stacks);
void	rb(t_stacks *stacks);
void	rr(t_stacks *stacks);
void	rra(t_stacks *stacks);
void	rrb(t_stacks *stacks);
void	rrr(t_stacks *stacks);
void	pa(t_stacks *stacks);
void	pb(t_stacks *stacks);
int		get_moves(t_stacks *stacks);
int		dec_index(t_stack stack, int index);
int		inc_index(t_stack stack, int index);
int		arr_len(char **arr);
int		find_the_smallest(t_stack stacks);
void	free_program(t_stacks *stacks);
int		ft_satoi(const char *str, long *nb);
char	*ft_stradd(char const *s1, char const *s2);
int		nb_index(t_stack stacks, int nb);

#endif