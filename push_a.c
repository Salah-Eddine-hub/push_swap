/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/18 10:08:38 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 void	push_a(t_stack *stacks, int *top_a, int *top_b)
{
	(*top_a)++;
	stacks->stack_a[*top_a] = stacks->stack_b[*top_b];
	(*top_b)--;
}