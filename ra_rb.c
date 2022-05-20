/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:34:36 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/20 12:37:23 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra_rb(t_stack *stacks, int top_a, int top_b)
{
    rotate_a(stacks, top_a);
    rotate_b(stacks, top_b);
}