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

typedef struct s_signed_list
{
	t_stack	*negative;
	t_stack	*positive;
}	t_signed_list;

t_error	ft_error_management(int size, char *argv[]);
t_stack	*ft_create_stack_a(int *ptr, int size);
t_stack	*ft_new_node(t_stack *prev, char *content);
t_stack	*ft_clone_a(t_stack	*a);
void	ft_free_stack_and_contents(t_stack *begin);
t_stack	*ft_radix_sort(t_stack *begin);
void	ft_free_only_list(t_stack *begin);
t_signed_list	*ft_divide_by_sign(t_stack	*begin);
void	ft_reverse(t_stack *positive, t_stack *negative);
int	ft_list_size(t_stack *lst);
#endif
