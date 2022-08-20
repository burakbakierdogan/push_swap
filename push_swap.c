/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:20:45 by berdogan          #+#    #+#             */
/*   Updated: 2022/08/20 02:06:33 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

static int	*ft_sort(int *ptr, int ac)
{
	int *stack_b;
	int	index;

	index = 0;
	b = malloc (sizeof(char) * ac);
	if (!b)
		return (NULL);
	while (1)
	{
		if (ptr[index] > ptr[index + 1])
		{
			res = ft_swap((ptr + index), (ptr + index + 1));
			if(!res)
				break;
		}
		else if ()
	}

}

int	main(int ac, char *argv[])
{
	int		*a;
	int		index;
	int		ac1;

	ac1 = ac - 1;
	index = 0;
	a = (int *) malloc (sizeof(int) * (ac1));
	while (ac > 1)
	{
		a[index] = ft_atoi(argv[index + 1]);
		index++;
		ac--;
	}
	index = 0;


	while (ac1)
	{
		printf("%d\n", a[index++]);
		ac1--;
	}

}
