/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:46:53 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 01:46:53 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

t_stack	*ft_error_management(int size, char *argv[])
{
	int		*nbr_arr;
	char	**str;
	t_stack	*a;

	if (size == 2)
		str = ft_split(argv[1], ' ');
	else if (size > 2)
		str = ft_get_args(size, argv);
	else
		exit(1);
	size = 0;
	while (str[size])
		size++;
	nbr_arr = ft_convert(str);
	a = ft_create_stack_a(nbr_arr, size - 1);
	return (a);
}