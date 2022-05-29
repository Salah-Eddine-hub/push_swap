# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 15:24:20 by sharrach          #+#    #+#              #
#    Updated: 2022/05/29 19:41:22 by sharrach         ###   ########.fr        #
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
			free_program.c\
			push_swap.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc 

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

$(NAME)	:	$(OBJS) $(HEADER)
			Make -C libft
			$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)

all		:	$(NAME)

clean	:
			make clean -C libft
			$(RM) $(OBJS)

fclean	: clean
				make fclean -C libft
				$(RM) $(NAME) $(OBJS)

re		:	fclean all

.PHONY	:	all clean fclean re