/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 02:00:34 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 02:00:34 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_check_numbers(int *ptr, int nbr)
{
	int	i;
	int	duplicate;

	i = 0;
	duplicate = 0;
	if (nbr < INT_MIN || nbr > INT_MAX)
	{
		ft_printf("Error\n");
		exit(1);
	}
	while (ptr[i])
	{
		if (ptr[i] == nbr)
			duplicate++;
		i++;
		if (duplicate > 1)
		{
			ft_printf("Error\n");
			exit(1);
		}
	}

}
