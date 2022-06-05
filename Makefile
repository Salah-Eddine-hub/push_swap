# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 15:24:20 by sharrach          #+#    #+#              #
#    Updated: 2022/06/05 19:57:22 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

HEADER	=	push_swap.h

SRCS	=	instraction/swap_a.c\
			instraction/swap_b.c\
			instraction/sa_sb.c\
			instraction/push_a.c\
			instraction/push_b.c\
			instraction/rotate_a.c\
			instraction/rotate_b.c\
			instraction/ra_rb.c\
			instraction/reverse_rotate_a.c\
			instraction/reverse_rotate_b.c\
			instraction/rra_rrb.c\
			sort_three.c\
			sort_five.c\
			ft_satoi.c\
			ft_stradd.c\
			arr_len.c\
			get_args.c\
			move_index.c\
			ft_putstr.c\
			sort_hundred.c\
			sort.c\
			ft_is_sorted.c\
			free_program.c\
			bubble_sort.c\
			nb_index.c\
			ft_smalest_num.c\
			push_swap.c

OBJS	=	$(SRCS:.c=.o)

BONUS_NAME	= checker

BONUS_HEADER = bonus/checker.h bonus/getnextline/get_next_line.h

BONUS_SRCS	= 	bonus/get_moves.c\
				bonus/moves_1.c\
				bonus/moves_2.c\
				bonus/moves_3.c\
				bonus/getnextline/get_next_line.c\
				bonus/getnextline/get_next_line_utils.c\
				bonus/checker.c\
				arr_len.c\
				move_index.c\
				ft_smalest_num.c\
				free_program.c\
				ft_stradd.c\
				ft_satoi.c\
				nb_index.c
				

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

$(NAME)	:	$(OBJS) $(HEADER)
			make -C libft
			$(CC) $(CFLAGS) libft/libft.a $(OBJS) -o $(NAME)

$(BONUS_NAME)	:	$(BONUS_OBJS) $(BONUS_HEADER)
					make -C libft
					$(CC) $(CFLAGS) libft/libft.a $(BONUS_OBJS) -o $(BONUS_NAME)

all		:	$(NAME)

bonus	:	$(BONUS_NAME)

clean	:
			make clean -C libft
			$(RM) $(OBJS) $(BONUS_OBJS)

fclean	: clean
				make fclean -C libft
				$(RM) $(NAME) $(BONUS_NAME) $(OBJS) $(BONUS_OBJS)

re		:	fclean all

.PHONY	:	all clean fclean re