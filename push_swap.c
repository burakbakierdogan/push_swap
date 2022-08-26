/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:20:45 by berdogan          #+#    #+#             */
/*   Updated: 2022/08/26 18:34:44 by berdogan         ###   ########.fr       */
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

/*int	ft_find_mid(t_list *begin, int ac)
{
	int	ac1;

	ac1 = ac;
	while (ac)
	{
		while (begin)
		{

		}
	}
}
*/
t_list	*ft_new_struct()
{
	t_list *new;

	new = (t_list *) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new -> next = NULL;
	return (new);
}

int	main(int ac, char *argv[])
{
	int		*a;
	int		index;
	int		ac1;
	t_list	*stack_a;
	t_list	*hold;

	index = 1;
	stack_a = (t_list *) malloc (sizeof(t_list));
	if (!stack_a)
		return (0);
	hold = stack_a;
	while (ac > 1)
	{
		stack_a -> data = ft_atoi(*(argv + index++));
		stack_a -> next = ft_new_struct();
		stack_a = stack_a -> next;
		ac--;
	}
	stack_a = hold;
	while (stack_a -> next)
	{
		printf("%d\n", stack_a -> data);
		stack_a = stack_a -> next;
	}
}
