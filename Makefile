# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pllucian <pllucian@21-school.ru>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/10 10:52:07 by pllucian          #+#    #+#              #
#    Updated: 2020/11/10 20:20:09 by pllucian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c

OBJS = $(SRCS:.c=.o)

INCL = libft.h

NAME = libft.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME):	$(SRCS) $(INCL)
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

so:			$(SRCS) $(INCL)
			$(CC) $(CFLAS) -fPIC -c $<
			$(CC) $(CFLAS) -shared -o $(NAME:.a=.so) $(<:.c=.o)

all:		$(NAME) so

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(NAME:.a=.so)

re:			fclean all

.PHONY:		all clean fclean re
