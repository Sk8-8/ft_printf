# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kguillem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/27 20:29:38 by kguillem          #+#    #+#              #
#    Updated: 2025/01/27 21:42:43 by kguillem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
CFLAGS += -ggdb
RM =rm -rf
INC_DIR = .
CPPFLAGS = -I $(INC_DIR)
FILES = ft_hexa
OBJS = $(FILES:.c=.o)

ARNAME = ar rcs $(NAME)
RANNAME = ranlib $(NAME)
all:	$(NAME)

$(NAME):	$(OBJS)
	$(ARNAME)	$(OBJS)
	$(RANNAME)

%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

re: fclean all

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)
.PHONY: all re clean fclean
