/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_op.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:05:46 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/08 07:05:46 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_newnode(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> next = NULL;
	new -> nbr = nbr;
	return (new);
}


