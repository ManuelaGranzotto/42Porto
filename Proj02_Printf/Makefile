# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 18:43:24 by mfranke-          #+#    #+#              #
#    Updated: 2023/10/31 14:11:05 by mfranke-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDE = ft_printf.h
C_SOURCE = ft_printf.c ft_print_format.c ft_print_ptr.c

OBJ = $(C_SOURCE:.c=.o)
FLAG = -Wall -Wextra -Werror
CC = cc

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
