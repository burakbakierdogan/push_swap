/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:43:19 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 03:58:00 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_max_len(t_lst *a, int len)
{
	int	*ptr;
	int	i;

	ptr = (int *) malloc (sizeof(int) * len);
	if (!ptr)
		return (0);
	i = 0;
	while (a)
	{
		ptr[i++] = ft_strlen (a -> i_nbr);
		a = a -> next;
	}
	i = ft_max(ptr, len);
	free(ptr);
	return (i);
}

t_stack	*ft_stack_operations2(t_stack  *stack, t_counter counter, int size)
{
		while (counter.j < size)
		{
			if (counter.i >= (int)ft_strlen( stack ->a_top -> i_nbr)
				|| (stack -> a_top -> i_nbr[counter.i] == '0'))
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
		return (stack);
}

void	ft_stack_operations(t_stack *stack, int max_str, int size)
{
	t_counter	counter;
	t_lst *hold;
	counter.i = 0;
	counter.j = 0;
	counter.k = 0;
	while (counter.i < max_str)
	{
		stack = ft_stack_operations2(stack, counter, size);
		counter.j = 0;
		counter.k = 0;
		counter.i++;
	}
	hold = stack -> a_top;
	while (hold)
	{
		ft_printf("%d ", hold ->nbr);
		hold = hold -> next;
	}
}
