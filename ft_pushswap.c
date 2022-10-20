/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:25:34 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/20 06:25:34 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_pushswap(t_lst *a_clone, t_lst *a)
{
	t_stack	*stack;
	int		size;
	int		max_str;

	stack = malloc (sizeof(t_stack));
	stack -> a_top = a;
	stack -> b_top = NULL;
	size = ft_list_size(a);
	max_str = ft_max_len(a, size);
	ft_printf("max str = %d, size = %d\n", max_str, size);
	a = a_clone;
}
