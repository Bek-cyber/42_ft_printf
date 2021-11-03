# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ubolt <ubolt@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/08 18:37:05 by ubolt             #+#    #+#              #
#    Updated: 2021/01/15 16:36:15 by ubolt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CFLAGS	=	-Wall -Wextra -Werror

CC		=	gcc

SRCS	=	ft_acc.c ft_atoi.c ft_digit.c ft_get_digits.c ft_isspaces.c ft_output_p.c ft_output_x.c \
			ft_parser.c ft_printf.c ft_put_space.c ft_putchar.c ft_putstr.c ft_spec_init.c ft_strchar.c \
			ft_strchar.c ft_strlen.c ft_type_c.c ft_type_d.c ft_type_p.c ft_type_s.c \
			ft_type_u.c ft_type_x.c ft_types.c ft_width.c ft_put_string.c ft_len_dig_xp.c
 
OBJ	=	$(SRCS:.c=.o)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

clean:
		rm -rf $(OBJ)
fclean:	clean
		rm -rf $(NAME)
re: fclean all