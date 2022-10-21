/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:26:08 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 04:00:26 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_reverse(t_lst *positive, t_lst *negative)
{
	while (negative)
	{
		ft_revstr (negative -> s_nbr);
		negative = negative -> next;
	}
	while (positive)
	{
		ft_revstr (positive -> s_nbr);
		positive = positive -> next;
	}
}

t_lst	*ft_new_signed(t_lst *sign, char *content)
{
	if (!sign)
	{
		sign = ft_new_node (NULL, content, NULL);
		return (sign);
	}
	sign -> next = ft_new_node(sign, content, NULL);
	sign = sign -> next;
	return (sign);
}

t_sig	*ft_divide_by_sign(t_lst	*begin)
{
	t_sig	*box;

	box = malloc (sizeof(t_sig));
	box -> negative = NULL;
	box -> positive = NULL;
	while (begin)
	{
		if (begin -> s_nbr[0] == '-')
			box -> negative = ft_new_signed(box -> negative, begin -> s_nbr);
		else
			box -> positive = ft_new_signed(box -> positive, begin -> s_nbr);
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

t_lst	*ft_merge_lists(t_lst *zero, t_lst *one)
{
	t_lst	*hold;

	hold = zero;
	if (!zero)
		return (one);
	if (!one)
		return (zero);
	while (zero -> next)
		zero = zero -> next;
	zero -> next = one;
	return (hold);
}

t_lst	*ft_push(t_lst *lst, char *content)
{
	t_lst	*hold;

	if (!lst)
	{
		lst = ft_new_node (NULL, content, NULL);
		return (lst);
	}
	hold = lst;
	while (lst -> next)
		lst = lst -> next;
	lst -> next = ft_new_node(lst, content, NULL);
	return (hold);
}
