# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkoev <hkoev@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 14:32:21 by hkoev             #+#    #+#              #
#    Updated: 2023/05/15 21:08:00 by hkoev            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ_DIR		=	obj
SRCS		=   ft_printf.c \
				utils/ft_write.c \
				utils/ft_hexlen.c \
				utils/ft_itoa.c \
				utils/ft_itox.c \
				utils/ft_strcpy.c \
				utils/ft_uitoa.c \
				utils/ft_uiptox.c \
				ft_printf_args_c.c ft_printf_args_i.c ft_printf_args_p.c \
				ft_printf_args_s.c ft_printf_args_u.c ft_printf_args_x.c
OBJS     	=   $(addprefix $(OBJ_DIR)/,$(SRCS:.c=.o))
NAME		=	libftprintf.a
INCS		=	ft_printf.h
LIBC		=	ar rc
RM			=	rm -rf
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/utils
	gcc -Wall -Wextra -Werror -c $< -o $@

all: ${NAME}

%.o: %.c ${INCS}
	${CC} ${CFLAGS} -c ${SRCS}

$(NAME): ${OBJS}
	${LIBC} ${NAME} ${OBJS}

clean: 
	${RM} $(OBJ_DIR) main.o

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus