/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_new_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 06:47:20 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/11 06:47:20 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_radix_list	*ft_radix_new_node(char *str)
{
	t_radix_list *new;

	new = malloc (sizeof(t_radix_list));
	if (!new)
		return (NULL);
	new -> nbr = str;
	new -> next = NULL;
	new -> index = NULL;
	return (new);
}
