/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 06:23:21 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 06:52:06 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_ss(t_stack *stack)
{
	ft_sa(stack, 0);
	ft_sb(stack, 0);
	ft_printf("ss\n");
}

t_stack	*ft_rb(t_stack *stack, int status)
{
	t_lst	*last;
	t_lst	*hold2;

	last  = stack -> b_top;
	hold2 = stack -> b_top;
	stack -> b_top = stack -> b_top -> next;
	stack -> b_top -> prev = NULL;
	while (last -> next)
		last = last -> next;
	last -> next = hold2;
	hold2 -> next = NULL;
	hold2 -> prev = last;
	if (status)
		ft_printf("rb\n");
	return (stack);
}

t_stack	*ft_rr(t_stack *stack)
{
	stack = ft_ra(stack, 0);
	stack = ft_rb(stack, 0);
	fr_printf("rr\n");
	return (stack);
}

t_stack	*ft_rra(t_stack *stack, int status)
{
	t_lst	*last;

	last = stack -> a_top;
	while (last -> next)
		last = last -> next;
	last -> prev -> next = NULL;
	last -> prev = NULL;
	stack -> a_top -> prev = last;
	last -> next = stack -> a_top;
	stack -> a_top = last;
	if (status)
		ft_printf("rra\n");
	return (stack);
}

t_stack	*ft_rrb(t_stack *stack, int status)
{
	t_lst	*last;

	last = stack -> b_top;
	while (last -> next)
		last = last -> next;
	last -> prev -> next = NULL;
	last -> prev = NULL;
	stack -> b_top -> prev = last;
	last -> next = stack -> b_top;
	stack -> b_top = last;
	if (status)
		ft_printf("rrb\n");
	return (stack);
}
