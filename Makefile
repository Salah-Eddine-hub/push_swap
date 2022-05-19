# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharrach <sharrach@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/17 15:24:20 by sharrach          #+#    #+#              #
#    Updated: 2022/05/18 10:21:54 by sharrach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

HEADER	=	push_swap.h

SRCS	=	swap_a.c\
			swap_b.c\
			sa_sb.c\
			push_a.c\
			push_b.c\
			rotate_a.c\
			rotate_b.c\
			ra_rb.c\
			reverse_rotate_a.c\
			reverse_rotate_b.c\
			rra_rrb.c\
			get_args.c\
			push_swap.c

OBJS	=	$(SRCS:.c=.o)

CC		=	cc 

CFLAGS	=	-Wall -Wextra -Werror

RM		=	rm -f

$(NAME)	:	$(OBJS) $(HEADER)
			make -c libft
			$(CC) $(CFLAGS) $(OBJS) libft/libft.a -o $(NAME)

all		:	$(NAME)

clean	:
			make clean -C libft
			$(RM) $(OBJS)

fclean	: clean
				make fclean -C libft
				$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re