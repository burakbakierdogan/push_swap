/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:20:45 by berdogan          #+#    #+#             */
/*   Updated: 2022/08/18 16:25:49 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "push_swap.h"

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
