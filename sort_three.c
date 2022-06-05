/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 11:27:51 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 20:10:33 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stacks *stacks)
{
    int    bottom;
    int    i;

    i = stacks->a.top;
    while (i >= 0)
    {
        if (stacks->a.top == 0)
            break ;
        bottom = stacks->a.stack[dec_index(stacks->a, dec_index(stacks->a, i))];
        if (stacks->a.stack[i] < stacks->a.stack[dec_index(stacks->a, i)]
            && stacks->a.stack[dec_index(stacks->a, i)] > bottom)
        {
            if (bottom != stacks->a.stack[stacks->a.top])
            {
                if (nb_index(stacks->a, bottom) >= stacks->a.top / 2)
                    rotate_a(stacks);
                else
                    reverse_rotate_a(stacks);
            }
            if (!ft_is_sorted(stacks))
                swap_a(stacks);
            break ;
        }
        i = dec_index(stacks->a, i);
    }
}
