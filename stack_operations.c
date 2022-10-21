/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 04:38:56 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/19 04:38:56 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_pb(t_stack *stack)
{
	t_lst	*hold;

	hold = stack -> a_top;
	stack -> a_top = stack -> a_top -> next;
	if (stack -> a_top)
		stack -> a_top -> prev = NULL;
	if (!stack -> b_top)
	{
		stack -> b_top = hold;
		hold -> next = NULL;
		hold -> prev = NULL;
	}
	else
	{
		hold -> next = stack -> b_top;
		stack -> b_top -> prev = hold;
		stack -> b_top = hold;
		hold -> prev = NULL;
	}
	ft_printf("pb\n");
	return (stack);
}

t_stack	*ft_pa(t_stack *stack)
{
	t_lst	*hold;

	hold = stack -> b_top;
	stack -> b_top = stack -> b_top -> next;
	if (stack -> b_top)
		stack -> b_top -> prev = NULL;
	if (!stack -> a_top)
	{
		stack -> a_top = hold;
		hold -> next = NULL;
		hold -> prev = NULL;
	}
	else
	{
		hold -> next = stack -> a_top;
		stack -> a_top -> prev = hold;
		stack -> a_top = hold;
		hold -> prev = NULL;
	}
	ft_printf("pa\n");
	return (stack);
}

t_stack	*ft_ra(t_stack *stack, int status)
{
	t_lst	*last;
	t_lst	*hold2;

	last = stack -> a_top;
	hold2 = stack -> a_top;
	stack -> a_top = stack -> a_top -> next;
	stack -> a_top -> prev = NULL;
	while (last -> next)
		last = last -> next;
	last -> next = hold2;
	hold2 -> next = NULL;
	hold2 -> prev = last;
	if (status)
		ft_printf("ra\n");
	return (stack);
}

void	ft_sa(t_stack *stack, int status)
{
	int	temp;

	if (!stack -> a_top -> next)
		return ;
	temp = stack -> a_top -> nbr;
	stack -> a_top -> nbr = stack -> a_top -> next -> nbr;
	stack -> a_top -> next -> nbr = temp;
	if (status)
		ft_printf ("sa\n");
}

void	ft_sb(t_stack *stack, int status)
{
	int	temp;

	if (!stack -> b_top -> next)
		return ;
	temp = stack -> b_top -> nbr;
	stack -> b_top -> nbr = stack -> b_top -> next -> nbr;
	stack -> b_top -> next -> nbr = temp;
	if (status)
		ft_printf ("sb\n");
}
