/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 06:53:25 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 11:32:18 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_rrr(t_stack *stack)
{
	stack = ft_rra(stack, 0);
	stack = ft_rrb(stack, 0);
	ft_printf ("rrr\n");
	return (stack);
}
