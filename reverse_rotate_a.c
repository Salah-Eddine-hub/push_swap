/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:39 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:37:14 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    reverse_rotate_a(t_stack *stacks, int top_a)
{
    int tmp;

    while(top_a == 0)
    {
        tmp = stacks->stack_a[top_a];
        stacks->stack_a[top_a] = stacks->stack_a[top_a + 1];
        stacks->stack_a[top_a + 1] = tmp;
        (top_a) ++;
    }
}