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

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

t_stack	*ft_newnode(int nbr);
char	**ft_get_args(int size, char **argv);
int	*ft_error_management(int size, char *argv[]);
int	*ft_convert(char **str);
void	ft_forbidden(char *str);
void	ft_check_numbers(int *ptr, int nbr, char *str);
t_stack	*ft_create_stack_a(int *arr, int size);
t_stack	*ft_new_node(int nbr);
void	ft_free_stack(t_stack *begin);
t_stack	*ft_last_node(t_stack *begin);

# endif
