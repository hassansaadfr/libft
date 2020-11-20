# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsaadaou <hsaadaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 22:04:03 by hsaadaou          #+#    #+#              #
#    Updated: 2020/11/20 00:41:46 by hsaadaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= clang

FLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRCS	= $(wildcard *.c)

HEADERS	= .

OBJECTS	= ${SRCS:.c=.o}

all:		$(NAME)

.c.o:
			${CC} ${FLAGS} -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME} :	${OBJECTS}
			ar rc libft.a ${OBJECTS}

clean:
			rm -rf ${OBJECTS}

fclean:		clean
			rm -rf $(NAME)

re:			fclean all
