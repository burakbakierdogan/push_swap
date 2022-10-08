/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 03:09:14 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/08 03:09:14 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>


typedef struct s_stack
{
	int		nbr;
	struct	s_stack *next;
}	t_stack;

void	ft_error(char *str);
t_stack	*ft_newnode(int nbr);

# endif
