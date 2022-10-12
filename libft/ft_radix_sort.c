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
	t_total_list	radix;
	t_radix_list	*neg;
	t_radix_list	*pos;

	i = 0;
	unsorted = ft_radix_new_node(ft_itoa_base_v2(ar[0], 2, 'X'));
	unsorted = ft_radix_new_list(unsorted, ar + 1, size - 1);
	radix = ft_divide_list(unsorted);
	pos = radix.positive;
	neg = radix.negative;
	while(neg)
	{
		ft_printf("neg = %s|| ", neg -> nbr);
		neg = neg -> next;
	}
	ft_printf("\n");
	return (pos);
}
