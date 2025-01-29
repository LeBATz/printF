# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdavid-g <rdavid-g@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 20:31:56 by rdavid-g          #+#    #+#              #
#    Updated: 2025/01/29 20:41:35 by rdavid-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_PP1.c ft_PP2.c
	
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CREATE = ar rcs
OBJ = $(SRC:.c=.o)
all: $(NAME)
.c.o:
		@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
$(NAME): $(OBJ)
		@$(CREATE) $(NAME) $(OBJ)
clean:
		@$(RM) $(OBJ)
fclean: clean
		@$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re