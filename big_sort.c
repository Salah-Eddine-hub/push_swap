/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:48:55 by sharrach          #+#    #+#             */
/*   Updated: 2022/05/29 19:36:25 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int    get_big_index(int tab, int size)
{
    int i;
    int j;
    int    big;

    i = 0;
    big = i;
    while (i <= size)
    {
        if (tab[i] > tab[big])
            big = i;
        i++;
    }
    return (big);
}

int    get_head_index(t_stacks stack)
{
    int	count;
    int	comp;
    int i;
    int j;

    count = ft_calloc (sizeof(int), stack.top + 1);
    if (!count)
        return (NULL);
    i = stack.top;
    while (i >= 0)
    {
        comp = stack.stack[i];
        j = i;
        while (j != dec_index(stack, i))
        {
            if (comp < stack.stack[dec_index(stack, i)])
            {
                comp = stack.stack[dec_index(stack, i)];
                count[i]++;
            }
            j = dec_index(stack, j);
        }
        i = dec_index(stack, i);
    }
    return (free(count), get_big_index(count, stack.top));
}


int    friends_head(t_stackssstacks)
{
    int    *flags;
    int    comp;
    int i;
    int    j;

    flags = ft_calloc (sizeof(int), stacks->a.top + 1);
    if (!flags)
        return (NULL);
    comp = get_head_index(stacks->a);
    i = comp;
    j = inc_index(stacks->a, i);
    while (i != j)
    {
        if (stacks->a.stack[comp] <= stacks->a.stack[i])
        {
            comp = i;
            flags[i] = 0;
        }
        else
            flags[i] = 1;
        i = dec_index(stacks->a, i);
    }
    return (flags);
}