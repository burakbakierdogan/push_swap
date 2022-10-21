/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_management.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 01:46:53 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/21 03:59:26 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

void	ft_check_numbers(int *ptr, int nbr, char *str, int k)
{
	int	i;
	int	duplicate;

	i = 0;
	duplicate = 0;
	if ((nbr == 0 || nbr == -1) && ft_strlen(str) > 3)
	{
		ft_printf("Error\n");
		exit(0);
	}
	while (i <= k)
	{
		if (ptr[i] == nbr)
			duplicate++;
		i++;
		if (duplicate > 1)
		{
			ft_printf("Error\n");
			exit(0);
		}
	}
}

void	ft_forbidden(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
	{
		ft_printf("Error\n");
		exit(0);
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && !ft_is_space(str[i]))
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

char	**ft_get_args(int size, char **argv)
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

static	int	*ft_convert(char **str)
{
	int	i;
	int	*ptr;
	int	j;
	int	k;

	i = -1;
	j = -1;
	k = 0;
	while (str[k])
		ft_forbidden(str[k++]);
	ptr = (int *) malloc (sizeof(int) * (k));
	if (!ptr)
		return (NULL);
	while (str[++i])
		ptr[i] = ft_atoi_for_push_swap(str[i]);
	while (++j < i)
		ft_check_numbers(ptr, ptr[j], str[j], k - 1);
	i = 0;
	while (str[i])
		free (str[i++]);
	free (str);
	return (ptr);
}

t_error	ft_error_management(int size, char *argv[])
{
	int		*nbr_arr;
	char	**str;
	t_error	ret;

	if (size == 2)
		str = ft_split(argv[1], ' ');
	else if (size > 2)
		str = ft_get_args(size, argv);
	else
		exit(1);
	size = 0;
	while (str[size])
		size++;
	nbr_arr = ft_convert(str);
	ret.ptr = nbr_arr;
	if (ft_is_sorted(nbr_arr, size - 1))
	{
		free (nbr_arr);
		exit (0);
	}
	ret.size = size - 1;
	return (ret);
}
