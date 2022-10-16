/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:50:42 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/16 06:50:42 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_stack	*ft_new_node(t_stack *prev, char *content)
{
	t_stack	*new;

	new = malloc (sizeof(t_stack));
	if (!new)
		return (NULL);
	new -> prev = prev;
	new -> next = NULL;
	new -> s_nbr = content;
	return (new);
}

t_stack	*ft_create_stack_a(int *ptr, int size)
{
	int	i;
	t_stack	*begin;
	t_stack	*hold;

	i = 0;
	begin = NULL;
	while (i <= size)
	{
		if (!begin)
		{
			begin = ft_new_node (NULL, ft_itoa_base_v2 (ptr[i++], 2, 'X'));
			hold = begin;
		}
		else
		{
			begin -> next = ft_new_node (begin, ft_itoa_base_v2 (ptr[i++], 2, 'X'));
			begin = begin -> next;
		}
	}
	free(ptr);
	return (hold);
}
