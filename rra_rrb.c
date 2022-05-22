
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:12 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 15:53:39 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra_rrb(t_stack *stacks, int top_a, int top_b)
{
	reverse_rotate_a(stacks, top_a);
	reverse_rotate_b(stacks, top_b);
}