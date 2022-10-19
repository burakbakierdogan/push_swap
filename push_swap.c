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
	t_lst	*a;
	t_lst	*a_clone;
	t_lst	*hold;

	ptr = ft_error_management (ac, argv);
	a = ft_create_stack_a(ptr.ptr, ptr.size);
	if (ptr.size < 1)
		exit(0);
	a_clone = ft_clone_a (a);
	a_clone = ft_radix_sort(a_clone);
	ft_get_the_index(a_clone);
	ft_clone_index(a_clone, a);
	hold = a;
	int i = 0;
	while (hold)
	{
		ft_printf("%d = %s\n",i++, ft_revstr (hold -> i_nbr));
		hold = hold -> next;
	}



	ft_free_stack_and_contents(a_clone);
	ft_free_stack_and_contents(a);
	return (0);
}
/*
hold = a_clone;
	while (hold)
	{
		ft_printf ("%d ", ft_atoi_base (hold -> s_nbr, 2));
		hold = hold -> next;
	}
	ft_printf("\n");
*/
