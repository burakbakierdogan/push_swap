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

#include "push_swap.h"
#include "libft/libft.h"

int	main(int ac, char *argv[])
{
	t_error	ptr;
	t_stack	*a;
	t_stack	*a_clone;

	ptr = ft_error_management (ac, argv);
	a = ft_create_stack_a(ptr.ptr, ptr.size);
	if (ptr.size < 1)
		exit(0);
	a_clone	= ft_clone_a(a);
	a_clone = ft_radix_sort(a_clone);
	ft_free_stack_and_contents(a_clone);
	ft_free_stack_and_contents(a);
	return (0);
}
