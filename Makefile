# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:19:16 by berdogan          #+#    #+#              #
#    Updated: 2022/10/07 14:19:16 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := clang
CFLAGS := -Wall -Werror -Wextra -o
SRCS := push_swap.c ft_error_management.c ft_get_args.c ft_convert.c ft_forbidden.c \
		ft_check_numbers.c

all: mlibft $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(NAME) $(SRCS) libft/libft.a
mlibft: $(SRCS)
	make -C ./libft
clean:
	make -C ./libft clean && rm -rf *.o
fclean: clean
	rm -rf $(NAME)
	rm -rf libft/libft.a
re: fclean all

