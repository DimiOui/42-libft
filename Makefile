# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpaccagn <dpaccagn@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 14:49:36 by dpaccagn          #+#    #+#              #
#    Updated: 2021/11/27 18:12:25 by dpaccagn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strdup.c \
				ft_atoi.c \
				ft_strnstr.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c\

LST			= ft_lstnew.c

BONUS_OBJS	= ${LST:%.c=%.o}

OBJS		= ${SRCS:%.c=%.o}

NAME		= libft.a

RM			= rm -f

CC			= cc

CFLAGS		= -Wall -Wextra -Werror -I includes -c

all:		${NAME}

${NAME}:	${OBJS}
			ar rcsv $@ $?

bonus:		${BONUS_OBJS}
			ar rcsv ${NAME} $?

%.o:		%.c
			${CC} ${CFLAGS} -c $?

clean:
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: bonus re clean fclean
