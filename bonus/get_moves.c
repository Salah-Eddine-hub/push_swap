/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:17:46 by sharrach          #+#    #+#             */
/*   Updated: 2022/06/05 20:06:14 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static	int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static int	check_actions(t_stacks *stacks, char *move)
{
	if (ft_strcmp(move, "sa\n") == 0)
		sa(stacks);
	else if (ft_strcmp(move, "sb\n") == 0)
		sb(stacks);
	else if (ft_strcmp(move, "ss\n") == 0)
		ss(stacks);
	else if (ft_strcmp(move, "pa\n") == 0)
		pa(stacks);
	else if (ft_strcmp(move, "pb\n") == 0)
		pb(stacks);
	else if (ft_strcmp(move, "ra\n") == 0)
		ra(stacks);
	else if (ft_strcmp(move, "rb\n") == 0)
		rb(stacks);
	else if (ft_strcmp(move, "rr\n") == 0)
		rr(stacks);
	else if (ft_strcmp(move, "rra\n") == 0)
		rra(stacks);
	else if (ft_strcmp(move, "rrb\n") == 0)
		rrb(stacks);
	else if (ft_strcmp(move, "rrr\n") == 0)
		rrr(stacks);
	else
		return (0);
	return (1);
}

int	get_moves(t_stacks *stacks)
{
	char	*move;

	while (1)
	{
		move = get_next_line(0);
		if (!move)
			break ;
		if (!check_actions(stacks, move))
		{
			ft_putendl_fd("Error", STDERR_FILENO);
			free(move);
			return (0);
		}
		free(move);
	}
	return (1);
}
