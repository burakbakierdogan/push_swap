/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:37:20 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/12 02:37:20 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_del_node(t_radix_list *begin)
{
	t_radix_list	*hold;
	t_radix_list	*hold2;
	t_radix_list	*hold3;

	if (begin -> nbr[0] == '-')
	{
		hold = begin -> next;
		free(begin);
		return (hold);
	}
	while (begin -> next -> nbr[0] != '-' && begin)
		begin = begin -> next;
	hold = begin;
	hold2 = begin -> next -> next;
	hold3 = begin -> next;
	free (hold3);
	hold -> next = hold2;
	return (hold);
}
