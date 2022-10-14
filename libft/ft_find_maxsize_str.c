/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_maxsize_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 04:07:36 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/14 04:07:36 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '-')
		i++;
	return (i);
}

int	ft_find_maxsize_str(t_radix_list *lst)
{
	int	len;
	int	*ptr;
	int	i;

	i = 0;
	len = ft_lstsize((t_list *)lst);
	ptr = (int *) malloc (sizeof(int) * (len + 1));
	if (!ptr)
		return (0);
	while (lst)
	{
		ptr[i++] = ft_strlen2 (lst -> nbr);
		lst = lst -> next;
	}
	i = ft_max(ptr, len);
	free(ptr);
	return (i);
}
