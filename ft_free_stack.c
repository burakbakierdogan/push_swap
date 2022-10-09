/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 06:04:59 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 06:04:59 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

void	ft_free_stack(t_stack *begin)
{
	t_stack	*hold;
	
	hold = begin;
	while (begin)
	{
		begin = begin -> next;
		free(hold);
		hold = begin;
	}

}
