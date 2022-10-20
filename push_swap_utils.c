/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 06:50:42 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/20 03:26:37 by berdogan         ###   ########.fr       */
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

<<<<<<< HEAD
int	ft_is_sorted(int *ptr, int size)
{
	int	i;

	i = 0;
	if (size == 0)
		exit (0);
	while (i <= size)
	{
		if (ptr[i] >= ptr[i + 1])
			return (0);
		if (i + 1 == size)
			break ;
		i++;
	}
	return (1);
}

static	void	ft_get_index(t_lst *a_clone)
{
	int	i;

	i = 0;
	while (a_clone)
	{
		a_clone -> i_nbr = ft_revstr (ft_itoa_base_v2(i, 2, 'X'));
		a_clone -> nbr = i++;
		a_clone = a_clone -> next;
	}
}

void	ft_index_match(t_lst *a_clone, t_lst *a)
=======
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
>>>>>>> e8b951210def65d43625baf5967a22be8eeb384e
{
	int		i;
	t_lst	*hold;

<<<<<<< HEAD
	i = 0;
	ft_get_index(a_clone);
=======
>>>>>>> e8b951210def65d43625baf5967a22be8eeb384e
	hold = a;
	while (a_clone)
	{
		while (a)
		{
<<<<<<< HEAD
			if ((ft_strlen(a -> s_nbr) == ft_strlen(a_clone -> s_nbr)
					&& !strncmp (a_clone -> s_nbr, a -> s_nbr,
						ft_strlen(a_clone -> s_nbr))))
			{
				a -> i_nbr = ft_strdup (a_clone -> i_nbr);
				a -> nbr = a_clone -> nbr;
			}
=======
			if (!ft_strncmp (a_clone -> s_nbr, a -> s_nbr,
				ft_strlen (a_clone -> s_nbr)))
			a -> i_nbr = ft_strdup (a_clone -> i_nbr);
>>>>>>> e8b951210def65d43625baf5967a22be8eeb384e
			a = a -> next;
		}
		a = hold;
		a_clone = a_clone -> next;
	}
}


