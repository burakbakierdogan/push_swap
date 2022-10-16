/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:26:08 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/16 09:26:08 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static	t_stack	*ft_new_signed_stack(t_stack *sign, char *content)
{
	if (!sign)
	{
		sign = ft_new_node (NULL, content);
		return (sign);
	}
	sign -> next = ft_new_node(sign, content);
	sign = sign -> next;
	return (sign);
}

t_signed_list	*ft_divide_by_sign(t_stack	*begin)
{
	t_signed_list	*box;

	box = malloc (sizeof(t_signed_list));
	box -> negative = NULL;
	box -> positive = NULL;
	while (begin)
	{
		if (begin -> s_nbr[0] == '-')
			box -> negative = ft_new_signed_stack(box -> negative, begin -> s_nbr);
		else
			box -> positive = ft_new_signed_stack(box -> positive, begin -> s_nbr);
		begin = begin -> next;
	}
	if (box -> negative)
	{
		while (box -> negative -> prev)
			box -> negative = box -> negative -> prev;
	}
	if (box -> positive)
	{
		while (box -> positive -> prev)
			box -> positive = box -> positive -> prev;
	}
	return (box);
}
