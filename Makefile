# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: estarck <estarck@student.42mulhouse.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 21:25:34 by estarck           #+#    #+#              #
#    Updated: 2022/10/06 11:23:51 by estarck          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
	
INCLUDES		=	-I./includes

SDIR		=	./srcs
_SRCS		= 	ft_atoi.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcmp.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_bzero.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_striteri.c \
				ft_calloc.c \
				ft_memchr.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_itoa.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strmapi.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_split.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
SRCS		=	$(patsubst %,$(SDIR)/%,$(_SRCS))

ODIR		=	./objs
_OBJS		=	${_SRCS:.c=.o}
OBJS		=	$(patsubst %,$(ODIR)/%,$(_OBJS))
MAKEOBJS	=	if [ -d objs ]; then :; else mkdir objs; fi

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

# Formatting
_END		=	$'\x1b[0m
_BOLD		=	$'\x1b[1m
_UNDER		=	$'\x1b[4m
_REV		=	$'\x1b[7m

# Colors
_GREY		=	$'\x1b[30m
_RED		=	$'\x1b[31m
_GREEN		=	$'\x1b[32m
_YELLOW		=	$'\x1b[33m
_BLUE		=	$'\x1b[34m
_PURPLE		=	$'\x1b[35m
_CYAN		=	$'\x1b[36m
_WHITE		=	$'\x1b[37m

all			:	${NAME}

$(NAME)		:	${OBJS}	
				@ar rc $(NAME) ${OBJS}
				@echo "$(_GREEN)$(_BOLD)End of the compilation libft.a$(_END)"

$(ODIR)/%.o	:	$(SDIR)/%.c
				@$(MAKEOBJS)
				@echo "$(_BLUE)Compiling libft.a in progress... $<$(_END)"
				@$(CC) $(INCLUDES) $(CFLAGS) -c $< -o $@

clean		:
				@echo "$(_YELLOW)Deleting .o files$(_END)"
				@${RM} ${OBJS} ${OBJS_B}
				@if [ -d objs ]; then rmdir objs; else :; fi

fclean		:	clean
				@echo "$(_RED)$(_BOLD)Remove libft.a$(_END)"
				@${RM} ${NAME}	

re			:	fclean all

.PHONY		: 	all libft.a clean fclean re 