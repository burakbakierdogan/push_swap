/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:35:44 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/11 06:35:44 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_radix_sort(int *ar, int size)
{
	int				i;
	t_radix_list	*unsorted;
	t_radix_list	*hold;

	i = 0;
	unsorted = ft_radix_new_list(ft_itoa_base_v2(ar[i++], 2, 'X'));
	hold = unsorted;
	while (i <= size)
	{
		unsorted -> next =  ft_radix_new_list(ft_itoa_base_v2(ar[i++], 2, 'X'));
		unsorted = unsorted -> next;
	}
}
