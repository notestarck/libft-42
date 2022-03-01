# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 21:25:34 by estarck           #+#    #+#              #
#    Updated: 2022/03/01 11:40:39 by estarck          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= $(wildcard srcs/*.c)
OBJS	= ${SRCS:.c=.o}
HEADER	= ./includes
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f

.c.o:
			${CC} ${CFLAGS} -I${HEADER} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}	
			ar rc $(NAME) ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}	

re:			fclean all

.PHONY: 	all libft.a clean fclean re 