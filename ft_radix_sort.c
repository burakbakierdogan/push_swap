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


t_stack	*ft_radix_sort(t_stack *begin)
{
	t_signed_list	*box;

	box = ft_divide_by_sign(begin);
	ft_free_only_list(begin);
	free(box);
	return (NULL);
}
