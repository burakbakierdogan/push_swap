/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:25:34 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 04:02:53 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_pushswap(t_lst *a)
{
	t_stack	*stack;
	int		size;
	int		max_str;

	stack = malloc (sizeof(t_stack));
	stack -> a_top = a;
	stack -> b_top = NULL;
	size = ft_list_size(a);
	max_str = ft_max_len(a, size);
	if (size > 5)
		ft_stack_operations(stack, max_str, size);
	ft_free_stack_and_contents(stack -> a_top);
	free(stack);
}
