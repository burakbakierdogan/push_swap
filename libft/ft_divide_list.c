/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divide_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 06:38:09 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/12 06:38:09 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_radix_list *ft_neg(char *str, t_radix_list *neg)
{
	t_radix_list *hold;

	if (!neg)
	{
		neg = ft_radix_new_node(str);
		return (neg);
	}
	hold = neg;
	while (neg -> next)
		neg = neg -> next;
	neg -> next = ft_radix_new_node(str);
	return (hold);
}

t_total_list	ft_divide_list(t_radix_list *unsorted)
{
	t_radix_list	*neg;
	t_radix_list	*pos;
	t_total_list	ret;
	t_radix_list	*hold;

	neg = NULL;
	pos = NULL;
	hold = unsorted;
	while (unsorted)
	{
		if (unsorted -> nbr[0] == '-')
			neg = ft_neg(unsorted -> nbr, neg);
		else
			pos = ft_neg(unsorted -> nbr, pos);
		unsorted = unsorted -> next;
	}
	unsorted = hold;
	ft_free_only_list(unsorted);
	ret.negative = neg;
	ret.positive = pos;

	return (ret);
}
