# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 10:52:07 by pllucian          #+#    #+#              #
#    Updated: 2020/11/10 21:42:59 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_bzero.c

OBJS = $(SRCS:.c=.o)

INCL = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME):	$(SRCS) $(INCL)
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			ar rc $(NAME) $(<:.c=.o)
			ranlib $(NAME)

so:			$(SRCS) $(INCL)
			$(CC) $(CFLAS) -fPIC -c $< -o $(<:.c=.o)
			$(CC) $(CFLAS) -shared -o $(NAME:.a=.so) $(<:.c=.o)

all:		$(NAME) so

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(NAME:.a=.so)

re:			fclean all

.PHONY:		so all clean fclean re