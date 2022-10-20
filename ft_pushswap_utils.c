/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 06:43:19 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/20 06:43:19 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	ft_max_len(t_lst *a)
{
	int	*ptr;
	int	len;
	int	i;

	len = ft_list_size (a);
	ptr = (int *) malloc (sizeof(int) * len);
	if (!ptr)
		return (0);
	i = 0;
	while (a)
	{
		ptr[i++] = ft_strlen (a -> i_nbr);
		a = a -> next;
	}
	i = ft_max(ptr, len);
	free(ptr);
	return (i);
}
