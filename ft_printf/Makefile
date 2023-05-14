# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 14:32:21 by hkoev             #+#    #+#              #
#    Updated: 2023/05/14 20:02:23 by hkoev            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=   ft_printf.c ft_itoa.c ft_itox.c ft_strcpy.c ft_uint_to_str.c ft_ptr_to_hex.c
OBJS		=	${SRCS:.c=.o}
NAME		=	ft_printf.a
INCS		=	ft_printf.h
LIBC		=	ar rc
RM			=	rm -f
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

all: ${NAME}

%.o: %.c ${INCS}
	${CC} ${CFLAGS} -c ${SRCS}

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean: 
	${RM} ${OBJS} main.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus