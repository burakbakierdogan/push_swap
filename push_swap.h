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

typedef struct s_lst
{
	struct s_lst	*next;
	struct s_lst	*prev;
	int				nbr;
	char			*s_nbr;
	char			*i_nbr;
}	t_lst;
typedef struct s_error
{
	int	size;
	int	*ptr;
}	t_error;

typedef struct s_signed_list
{
	t_lst	*negative;
	t_lst	*positive;
}	t_sig;

t_error	ft_error_management(int size, char *argv[]);
t_lst	*ft_create_stack_a(int *ptr, int size);
t_lst	*ft_new_node(t_lst *prev, char *content);
t_lst	*ft_clone_a(t_lst	*a);
void	ft_free_stack_and_contents(t_lst *begin);
t_lst	*ft_radix_sort(t_lst *begin);
void	ft_free_only_list(t_lst *begin);
t_sig	*ft_divide_by_sign(t_lst	*begin);
void	ft_reverse(t_lst *positive, t_lst *negative);
int		ft_list_size(t_lst *lst);
t_lst	*ft_merge_lists(t_lst *zero, t_lst *one);
t_lst	*ft_push(t_lst *lst, char *content);
t_lst	*ft_sort(t_lst *sign);
t_lst	*ft_reverse_list(t_lst *negative);
#endif
