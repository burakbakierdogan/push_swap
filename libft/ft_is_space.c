/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_space.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:23:37 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/03 03:41:34 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(int c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	return (0);
}