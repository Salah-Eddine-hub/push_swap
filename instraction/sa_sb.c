/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:35:15 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/04 14:08:11 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa_sb(t_stacks *stacks)
{
	swap_a(stacks);
	swap_b(stacks);
	ft_putstr("sa_sb\n");
}
