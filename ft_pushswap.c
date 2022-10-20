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

static	int	ft_is_ok(t_lst *begin)
{
	while (begin)
	{
		if (begin -> nbr > begin -> next -> nbr)
			break ;
		begin = begin -> next;
	}
	if (!begin)
		return (1);
	return (0);
}

void	ft_stack_operations(t_stack *stack, int max_str, int size, t_lst *a_clone)
{
	t_counter	counter;

	counter.i = 0;
	counter.j = 0;
	counter.k = 0;
	int z = 0;
	while (counter.i < max_str)
	{
		while (counter.j < size)
		{
			if (counter.i >= (int)ft_strlen( stack ->a_top -> i_nbr))
			{
					stack = ft_pb(stack);
					counter.k++;
			}
			else if (stack ->a_top -> i_nbr[counter.i] == '0')
			{
					stack = ft_pb(stack);
					counter.k++;
			}
			else
				stack = ft_ra(stack);
			counter.j++;
		}
		while (counter.k > 0)
		{
			stack = ft_pa(stack);
			counter.k--;
		}
		counter.j = 0;
		counter.i++;
		if (ft_is_ok(stack -> a_top))
			break ;
	}
	a_clone = NULL;
	z = 0;
	/*while (counter.j < size -1)
	{
		stack = ft_ra(stack);
		counter.j++;
	}
	*/
	while (stack ->a_top)
	{
		ft_printf("%d\n", stack -> a_top -> nbr);
		stack -> a_top = stack ->a_top -> next;
	}
}

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
	ft_stack_operations(stack, max_str, size, a_clone);
	a_clone = a;

}
