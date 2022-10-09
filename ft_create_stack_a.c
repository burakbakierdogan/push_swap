/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:49:18 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 04:49:18 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_create_stack_a(int *arr, int size)
{
	t_stack	*begin;
	t_stack	*hold;
	int		i;

	i = 0;
	begin = ft_new_node(arr[i++]);
	hold = begin;
	while (i <= size)
	{
			begin -> next = ft_new_node(arr[i++]);
			begin = begin -> next;
	}
	free(arr);
	return (hold);
}
