/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort_utils_1.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:19:35 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/18 07:19:35 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static	int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '-')
		i++;
	return (i);
}

static	int	ft_max_str_len(t_lst	*sign)
{
	int	*ptr;
	int	len;
	int	i;

	len = ft_list_size (sign);
	ft_reverse(NULL, sign);
	ptr = (int *) malloc (sizeof(int) * len);
	if (!ptr)
		return (0);
	i = 0;
	while (sign)
	{
		ptr[i++] = ft_strlen2 (sign -> s_nbr);
		sign = sign -> next;
	}
	i = ft_max(ptr, len);
	free(ptr);
	return (i);
}

static	t_lst	*ft_binary_sort(t_lst *sign, int i)
{
	t_lst	*zero;
	t_lst	*one;
	t_lst	*hold;

	zero = NULL;
	one = NULL;
	hold = sign;
	while (sign)
	{
		if (i >= ft_strlen2(sign -> s_nbr))
			zero = ft_push(zero, sign -> s_nbr);
		else if (sign -> s_nbr[i] == '0')
			zero = ft_push(zero, sign -> s_nbr);
		else if (sign -> s_nbr[i] == '1')
			one = ft_push(one, sign -> s_nbr);
		sign = sign -> next;
	}
	ft_free_only_list(hold);
	sign = ft_merge_lists(zero, one);
	return (sign);
}

t_lst	*ft_sort(t_lst *sign)
{
	int	i;
	int	max;

	i = 0;
	if (!sign)
		return (NULL);
	max = ft_max_str_len(sign);
	while (i < max)
		sign = ft_binary_sort(sign, i++);
	return (sign);
}

t_lst	*ft_reverse_list(t_lst *negative)
{
	char	**str;
	int		len;
	t_lst	*hold;

	hold = negative;
	len = ft_list_size(negative);
	str = (char **) malloc ((len + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	len = 0;
	while (negative)
	{
		str[len++] = negative -> s_nbr;
		negative = negative -> next;
	}
	negative = hold;
	while (negative)
	{
		negative -> s_nbr = str[--len];
		negative = negative -> next;
	}
	free(str);
	return (hold);
}
