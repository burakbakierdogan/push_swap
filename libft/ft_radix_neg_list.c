/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_neg_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:56:11 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/11 23:56:11 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_radix_neg_list(t_radix_list *begin)
{
	t_radix_list	*hold;
	t_radix_list	*negative;

	hold = begin;
	negative = NULL;
	while (begin)
	{
		if (begin -> nbr[0] == '-')
		{
			negative = ft_cpy_node(begin, negative);
			if (begin == hold)
			{
				hold = ft_del_node(hold);
				begin = hold;
			}
			else
				begin = ft_del_node(hold);
		}
		else
			begin = begin -> next;
	}
	return (negative);
}
