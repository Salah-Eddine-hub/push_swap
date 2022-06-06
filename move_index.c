/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:30:30 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/06 15:52:19 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	inc_index(t_stack stack, int index)
{
	if (index >= stack.top)
		index = 0;
	else
		(index)++;
	return (index);
}

int	dec_index(t_stack stack, int index)
{
	if (index <= 0)
		index = stack.top;
	else
		(index)--;
	return (index);
}
