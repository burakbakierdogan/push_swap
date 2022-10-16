/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:09:14 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/08 03:09:14 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	struct	s_stack	*next;
	struct	s_stack	*prev;
	int		nbr;
	char	*s_nbr;
	char	*i_nbr;
}	t_stack;
typedef struct s_error
{
	int	size;
	int	*ptr;
}	t_error;

t_error	ft_error_management(int size, char *argv[]);
t_stack	*ft_create_stack_a(int *ptr, int size);
t_stack	*ft_new_node(t_stack *prev, char *content);
#endif
