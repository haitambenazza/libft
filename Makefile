# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 14:20:00 by hbenazza          #+#    #+#              #
#    Updated: 2023/11/20 16:32:20 by hbenazza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_substr.c ft_tolower.c ft_toupper.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c

CFLAGS = -Wall -Wextra -Werror

OBJECT = ${SRC:.c=.o}

BSRC = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

BONUS = ${BSRC:.c=.o}

LIB = ar rc

CLEAN = rm -rf

${NAME}: ${OBJECT} ${SRC}
		${LIB} ${NAME} ${OBJECT}

${BONUS}: ${BSRC}
		cc -c ${CFLAGS} ${BSRC}
		${LIB} ${NAME} ${BONUS}

clean:
		${CLEAN} ${OBJECT} ${BONUS}

fclean: clean
		${CLEAN} ${NAME}

all:	${NAME}

re: fclean all

bonus: ${BONUS}
