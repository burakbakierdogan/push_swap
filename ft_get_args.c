/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:52:53 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/09 01:52:53 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

char **ft_get_args(int size, char **argv)
{
	char	**str;
	int		i;

	i = 0;
	str = (char **) malloc (sizeof(char *) * (size));
	if (!str)
		return (NULL);
	while (size > 1)
	{
		str[i] = ft_strdup(argv[i + 1]);
		i++;
		size--;
	}
	str[i] = NULL;
	i = 0;
	return (str);
}
