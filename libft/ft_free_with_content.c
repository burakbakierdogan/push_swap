/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_with_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 05:38:48 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/13 05:38:48 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_with_content(t_radix_list *begin)
{
	t_radix_list	*hold;

	while (begin)
	{
		hold = begin -> next;
		free (begin -> nbr);
		free (begin -> index);
		free (begin);
		begin = hold;
	}
}
