/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:09:14 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/20 03:25:27 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_lst
{
	struct s_lst	*next;
	struct s_lst	*prev;
	char			*s_nbr;
	int				nbr;
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

typedef struct s_stack
{
	t_lst	*a_top;
	t_lst	*b_top;
}	t_stack;

typedef struct s_counter
{
	int	i;
	int	j;
	int	k;
}	t_counter;

t_error	ft_error_management(int size, char *argv[]);
t_lst	*ft_create_stack_a(int *ptr, int size);
t_lst	*ft_new_node(t_lst *prev, char *content, char *content2);
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
int		ft_is_sorted(int *ptr, int size);
void	ft_index_match(t_lst *a_clone, t_lst *a);
void	ft_pushswap(t_lst *a);
void	ft_stack_operations(t_stack *stack, int max_str, int size);
void	ft_check_numbers(int *ptr, int nbr, char *str, int k);
int		ft_max_len(t_lst *a, int len);
t_stack	*ft_pb(t_stack *stack);
t_stack	*ft_pa(t_stack *stack);
t_stack	*ft_ra(t_stack *stack, int status);
void	ft_sb(t_stack *stack, int status);
void	ft_sa(t_stack *stack, int status);
void	ft_ss(t_stack *stack);
t_stack	*ft_rb(t_stack *stack, int status);
t_stack	*ft_rr(t_stack *stack);
t_stack	*ft_rra(t_stack *stack, int status);
t_stack	*ft_rrb(t_stack *stack, int status);
t_stack	*ft_rrr(t_stack *stack);
#endif
