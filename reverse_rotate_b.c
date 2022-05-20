/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:43 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:37:04 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_b(t_stack *stacks, int top_b)
{
    int tmp;

    while(top_b == 0)
    {
        tmp = stacks->stack_b[top_b];
        stacks->stack_b[top_b] = stacks->stack_b[top_b + 1];
        stacks->stack_b[top_b + 1] = tmp;
        (top_b) ++;
    }
}