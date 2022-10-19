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

t_lst	*ft_create_stack_a(int *ptr, int size)
{
	int		i;
	t_lst	*begin;
	t_lst	*hold;

	i = 0;
	begin = NULL;
	while (i <= size)
	{
		if (!begin)
		{
			begin = ft_new_node
				(NULL, ft_itoa_base_v2 (ptr[i++], 2, 'X'), NULL);
			hold = begin;
		}
		else
		{
			begin -> next = ft_new_node
				(begin, ft_itoa_base_v2 (ptr[i++], 2, 'X'), NULL);
			begin = begin -> next;
		}
	}
	free(ptr);
	return (hold);
}

t_lst	*ft_clone_a(t_lst	*a)
{
	t_lst	*begin;
	t_lst	*hold;

	begin = NULL;
	while (a)
	{
		if (!begin)
		{
			begin = ft_new_node (NULL, ft_strdup(a -> s_nbr), NULL);
			hold = begin;
			a = a -> next;
		}
		else
		{
			begin -> next = ft_new_node (begin, ft_strdup(a -> s_nbr), NULL);
			begin = begin -> next;
			a = a -> next;
		}
	}
	return (hold);
}

static	char	*ft_reverse_and_fill(char	*str)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	new = (char *) malloc (10 * sizeof(char));
	if (!new)
		return (NULL);
	while (i <= 9)
		new[i++] = '0';
	new[i] = '\0';
	i = 0;
	while (j >= 0)
		new[i++] = str[j--];
	free(str);
	return (new);
}

void	ft_get_the_index(t_lst	*begin)
{
	int	i;

	i = 0;
	while (begin)
	{
		begin -> i_nbr = ft_reverse_and_fill (ft_itoa_base_v2(i++, 2, 'X'));
		begin = begin -> next;
	}
}

void	ft_clone_index(t_lst *a_clone, t_lst *a)
{
	t_lst	*hold;

	hold = a;
	while (a_clone)
	{
		while (a)
		{
			if (!ft_strncmp (a_clone -> s_nbr, a -> s_nbr,
				ft_strlen (a_clone -> s_nbr)))
			a -> i_nbr = ft_strdup (a_clone -> i_nbr);
			a = a -> next;
		}
		a = hold;
		a_clone = a_clone -> next;
	}
}


