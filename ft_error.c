/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:13:13 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/07 14:13:13 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *str)
{
	while (*str)
	{
		if (!ft_isdigit(*str++))
		{
			ft_printf("Error");
			exit(1);
		}
	}
}
