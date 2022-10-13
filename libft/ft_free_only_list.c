/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_only_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:36:05 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/13 05:36:05 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_only_list(t_radix_list *unsorted)
{
	t_radix_list	*hold;

	while (unsorted)
	{
		hold = unsorted -> next;
		free(unsorted);
		unsorted = hold;
	}
}
