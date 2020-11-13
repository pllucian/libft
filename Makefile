# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 10:52:07 by pllucian          #+#    #+#              #
#    Updated: 2020/11/13 14:03:26 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c	\
		ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c

OBJS = $(SRCS:.c=.o)

INCL = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

so:			$(OBJS)
			$(CC) $(CFLAS) -shared -o $(NAME:.a=.so) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(NAME:.a=.so)

re:			fclean all

.PHONY:		all clean fclean re