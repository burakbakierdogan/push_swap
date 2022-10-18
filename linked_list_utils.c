/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:55:24 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/17 02:55:24 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_lst	*ft_new_node(t_lst *prev, char *content)
{
	t_lst	*new;

	new = malloc (sizeof(t_lst));
	if (!new)
		return (NULL);
	new -> prev = prev;
	new -> next = NULL;
	new -> s_nbr = content;
	return (new);
}

int	ft_list_size(t_lst *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
