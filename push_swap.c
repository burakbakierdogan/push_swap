/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:20:45 by berdogan          #+#    #+#             */
/*   Updated: 2022/08/26 19:42:50 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

#include "push_swap.h"

typedef struct s_list
{
	struct s_list *next;
	int		data;
}			t_list;

int	ft_find_mid(t_list *begin, int ac)
{
	int		nbr;
	t_list *hold;
	int		total;
	t_list	*hold1;

	hold = begin;
	hold1 = hold;
	total = 0;
	while (begin)
	{
		nbr = begin -> data;
		while (hold)
		{
			if (hold -> data <= nbr)
				total++;
			if (total == (ac / 2) + 1)
				return nbr;
			hold = hold -> next;
		}
		total = 0;
		hold = hold1;
		begin = begin -> next;
	}
	return (0);
}

t_list	*ft_new_struct()
{
	t_list *new;

	new = (t_list *) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new -> next = NULL;
	return (new);
}

t_list	*ft_swap(t_list *begin)
{
	
}
int	main(int ac, char *argv[])
{
	int		*a;
	int		index;
	int		ac1;
	t_list	*stack_a;
	t_list	*hold;

	index = 1;
	ac1 = ac -1;
	stack_a = (t_list *) malloc (sizeof(t_list));
	if (!stack_a)
		return (0);
	hold = stack_a;
	while (ac > 1)
	{
		stack_a -> data = ft_atoi(*(argv + index++));
		ac--;
		if (ac > 1)
			stack_a -> next = ft_new_struct();
		stack_a = stack_a -> next;
	}
	stack_a = hold;
	printf("mid = %d\n", ft_find_mid(stack_a, ac1));
	while (stack_a)
	{
		printf("%d\n", stack_a -> data);
		stack_a = stack_a -> next;
	}
}
