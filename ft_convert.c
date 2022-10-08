/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:56:37 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 01:56:37 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	*ft_convert(char **str)
{
	int	i;
	int	*ptr;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
		ft_forbidden(str[i++]);
	ptr = (int *) malloc (sizeof(int) * (i));
	if (!ptr)
		return (NULL);
	i = -1;
	while (str[++i])
		ptr[i] = ft_atoi(str[i]);
	while (j < i)
		ft_check_numbers(ptr, ptr[j++]);
	i = 0;
	while(str[i])
		free(str[i++]);
	free(str);
	return (ptr);
}
