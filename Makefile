# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:19:16 by berdogan          #+#    #+#              #
#    Updated: 2022/10/21 00:14:34 by berdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := clang
CFLAGS := -Wall -Werror -Wextra -o
SRCS := push_swap.c push_swap_utils.c ft_error_management.c ft_radix_sort.c \
		ft_radix_sort_utils.c linked_list_utils.c ft_radix_sort_utils_1.c \
		ft_pushswap.c stack_operations.c ft_pushswap_utils.c

all: mlibft $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $(NAME) $(SRCS) libft/libft.a -g
mlibft: $(SRCS)
	make -C ./libft
clean:
	make -C ./libft clean && rm -rf *.o
fclean: clean
	rm -rf $(NAME)
	rm -rf libft/libft.a
re: fclean all
