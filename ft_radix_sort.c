/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:07:38 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/16 09:07:38 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_lst	*ft_radix_sort(t_lst *begin)
{
	t_sig	*box;
	t_lst	*merged;

	box = ft_divide_by_sign (begin);
	ft_free_only_list (begin);
	box -> negative = ft_sort (box -> negative);
	box -> positive = ft_sort (box -> positive);
	box -> negative = ft_reverse_list (box -> negative);
	merged = ft_merge_lists (box -> negative, box -> positive);
	ft_reverse (NULL, merged);
	free (box);
	return (merged);
}
