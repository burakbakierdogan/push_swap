/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_node.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 06:08:10 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 06:08:10 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_last_node(t_stack *begin)
{
	if (begin == NULL)
		return (NULL);
	while (begin -> next)
		begin = begin -> next;
	return (begin);
}

