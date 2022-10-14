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
	t_radix_list	*unsorted;
	t_total_list	radix;

	unsorted = NULL;
	unsorted = ft_radix_new_list(unsorted, ar, size);
	radix = ft_divide_list(unsorted);
	unsorted = ft_sort_merge_lists(radix.negative, radix.positive);
	return (NULL);
}


/*
while (radix.negative)
	{
		ft_printf("negatif = %d|| ", ft_atoi_base (radix.negative -> nbr, 2));
		radix.negative = radix.negative -> next;
	}
	ft_printf("\n");
	while (radix.positive)
	{
		ft_printf("pozitif = %d|| ",ft_atoi_base (radix.positive -> nbr, 2));
		radix.positive = radix.positive -> next;
	}
	return(radix.positive);

	do not forget to free the neg and positive list with contents
*/
