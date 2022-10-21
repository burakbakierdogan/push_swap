/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 07:24:52 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 11:28:25 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static	void	ft_sort_max(t_stack *stack, int size)
{
	t_lst	*max;

	max = stack -> a_top;
	while (max -> nbr != size)
		max = max -> next;
	if (max -> prev && max -> next)
	{
		ft_sa(stack, 1);
		ft_ra(stack, 1);
		if (stack -> a_top -> nbr > stack -> a_top -> next -> nbr)
			ft_sa(stack, 1);
	}
	else if (!max -> prev)
	{
		ft_ra(stack, 1);
		if (stack -> a_top -> nbr > stack -> a_top -> next -> nbr)
			ft_sa(stack, 1);
	}
	else
		if (stack -> a_top -> nbr > stack -> a_top -> next -> nbr)
			ft_sa(stack, 1);
}

static	int	ft_find_mid(t_stack *stack, int size)
{
	int		sum;
	t_lst	*hold;

	sum = 0;
	hold = stack -> a_top;
	while (hold)
	{
		sum += hold -> nbr;
		hold = hold -> next;
	}
	return (sum / size);
}

static	void	ft_sort_mid(t_stack *stack, int mid, int size)
{
	int		i;
	int		j;
	t_lst	*hold;

	i = 1;
	j = 0;
	while (i < size)
	{
		if (stack -> a_top -> nbr < mid)
		{
			ft_pb(stack);
			j++;
		}
		else
			ft_ra(stack, 1);
		i++;
	}
	ft_sort_max(stack, size);
	while (j-- > 0)
		stack = ft_pa(stack);
	if (stack ->a_top -> nbr > stack ->a_top -> next ->nbr)
		ft_sa(stack, 1);
	hold = stack -> a_top;
}

void	ft_mid_sort(t_stack *stack, int size)
{
	int	mid;

	mid = ft_find_mid(stack, size);
	if (size == 3)
		ft_sort_max(stack, size);
	else
		ft_sort_mid(stack, mid, size);
}
