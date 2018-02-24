# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mray <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/22 17:10:30 by mray              #+#    #+#              #
#    Updated: 2018/01/22 21:31:52 by mray             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
HEADER = libft.h
FLAG = -Wall -Wextra -Werror
OPTION = -I$(HEADER) -c
DEPENDENCY = *.c
OBJ = *.o

all: $(NAME)

$(NAME): $(DEPENDENCY)
		$(CC) $(FLAG) $(OPTION) $(DEPENDENCY)
		ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
re: fclean all
