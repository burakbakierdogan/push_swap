/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_new_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 07:07:08 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/11 07:07:08 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_radix_new_list(t_radix_list *begin, int *ar, int size)
{
	int				i;
	t_radix_list	*hold;

	i = 1;
	hold = begin;
	while (i <= size)
	{
		begin -> next = ft_new_node(ft_itoa_base_v2(ar[i++], 2, 'X'));
		begin = begin -> next;
	}
	return (hold);
}
