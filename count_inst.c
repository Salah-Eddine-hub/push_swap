/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_inst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:07:32 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:14:17 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_move(t_stack stack)
{
	int	*count;
	int	i;
	int	j;

	count = ft_calloc (stack.top + 1, sizeof(int));
	if (!count)
		return (NULL);
	i = 0;
	j = stack.top / 2;
	while (i <= stack.top)
	{
		if (i >= j)
			count[i] = stack.top - i;
		else if (i < j)
			count[i] = i + 1;
		i ++;
	}
	return (count);
}
