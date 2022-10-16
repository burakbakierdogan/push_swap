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
	t_stack	*hold;


	ptr = ft_error_management (ac, argv);
	a = ft_create_stack_a(ptr.ptr, ptr.size);
	int i = 1;
	hold = a;
	while (a -> next)
	{
		ft_printf("%d - %s\n",i++, a -> s_nbr);
		a = a -> next;
		if (!a -> next)
			ft_printf("%d - %s\n", i, a -> s_nbr);
	}
	ft_printf("----------\n");
	while (a)
	{
		hold = a -> prev;
		free(a -> s_nbr);
		free(a);
		a = hold;
	}
	return (0);
}
