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


static	void	ft_forbidden(char *str)
{
	int	i;

	i = 0;
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

static	void	ft_check_numbers(int *ptr, int nbr)
{
	int	i;
	int	duplicate;

	i = 0;
	duplicate = 0;
	if (nbr < INT_MIN || nbr > INT_MAX)
	{
		ft_printf("Error\n");
		exit(1);
	}
	while (ptr[i])
	{
		if (ptr[i] == nbr)
			duplicate++;
		i++;
		if (duplicate > 1)
		{
			ft_printf("Error\n");
			exit(1);
		}
	}

}

static	int	*ft_convert(char **str)
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
static	void	ft_create_stacks(char **str)
{
	int		*arr;
	int		size;


	size = 0;
	while (str[size])
		size++;
	arr = ft_convert(str);
	int	i = 0;
	while (i < size)
	{
		ft_printf("%d\n", arr[i++]);
	}
	free(arr);
}

static	char **ft_get_args(int size, char **argv)
{
	char	**str;
	int		i;

	i = 0;
	str = (char **) malloc (sizeof(char *) * (size - 1));
	if (!str)
		return (NULL);
	while (size > 1)
	{
		str[i] = argv[i];
		i++;
		size--;
	}
	str[i] = NULL;
	return (str);
}

int	main(int ac, char *argv[])
{
	char	**str;

	if (ac == 2)
		str = ft_split(argv[1], ' ');
	else
		str = ft_get_args(ac, argv + 1);
	ft_create_stacks(str);

}
