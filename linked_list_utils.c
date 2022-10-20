/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 02:55:24 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/20 01:11:03 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_lst	*ft_new_node(t_lst *prev, char *content, char *content2)
{
	t_lst	*new;

	new = malloc (sizeof(t_lst));
	if (!new)
		return (NULL);
	new -> prev = prev;
	new -> next = NULL;
	new -> s_nbr = content;
	new -> i_nbr = content2;
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

void	ft_free_stack_and_contents(t_lst *begin)
{
	t_lst	*hold;

	while (begin)
	{
		hold = begin -> next;
		if (begin -> s_nbr)
			free(begin -> s_nbr);
		if (begin -> i_nbr)
			free (begin -> i_nbr);
		free(begin);
		begin = hold;
	}
}

void	ft_free_only_list(t_lst *begin)
{
	t_lst	*hold;

	while (begin)
	{
		hold = begin -> next;
		free(begin);
		begin = hold;
	}
}
