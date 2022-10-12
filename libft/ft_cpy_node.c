/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:06:29 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/12 00:06:29 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_cpy_node(t_radix_list *begin, t_radix_list *negative)
{
	t_radix_list *hold;

	if (!negative)
	{
		negative = ft_radix_new_node(begin -> nbr);
		return (negative);
	}
	hold = negative;
	while (negative -> next)
			negative = negative -> next;
	negative -> next = ft_radix_new_node(begin -> nbr);
	return (hold);
}
