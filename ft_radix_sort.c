/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:07:38 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/16 09:07:38 by berdogan         ###   ########.fr       */
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

static	int	ft_max_str_len(t_stack	*sign)
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

static	t_stack	*ft_push(t_stack *lst, char *content)
{
	t_stack	*hold;

	if (!lst)
	{
		lst = ft_new_node (NULL, content);
		return (lst);
	}
	hold = lst;
	while (lst -> next)
		lst = lst -> next;
	lst -> next = ft_new_node(lst, content);
	return (hold);
}

static	t_stack	*ft_merge(t_stack *zero, t_stack *one)
{
	t_stack	*hold;

	hold = zero;
	if (!zero)
		return (one);
	if (!one)
		return (zero);
	while (zero -> next)
		zero = zero -> next;
	zero -> next = one;
	return (hold);
}

static	t_stack	*ft_sort(t_stack *sign)
{
	int	i;
	int	max;
	t_stack *zero;
	t_stack	*one;
	t_stack	*hold;

	i = 0;
	zero = NULL;
	one = NULL;
	hold = sign;
	if (!sign)
		return (NULL);
	max = ft_max_str_len(sign);
	while (i < max)
	{
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
		i++;
		ft_free_only_list(hold);
		sign = ft_merge(zero, one);
		hold = sign;
		zero = NULL;
		one  = NULL;
	}
	return (sign);
}

static	t_stack	*ft_reverse_list(t_stack *negative)
{
	char	**str;
	int		len;
	t_stack	*hold;

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

t_stack	*ft_radix_sort(t_stack *begin)
{
	t_signed_list	*box;
	t_stack			*merged;

	box = ft_divide_by_sign(begin);
	ft_free_only_list(begin);
	box -> negative = ft_sort (box -> negative);
	box -> positive = ft_sort (box -> positive);
	box -> negative = ft_reverse_list(box -> negative);
	merged = ft_merge(box ->negative, box -> positive);
	/*while (merged)
	{
		ft_printf("%d\n", ft_atoi_base(ft_revstr(merged -> s_nbr), 2));
		merged = merged -> next;
	}
	*/
	/*
	while (box ->negative)
	{
		ft_printf("%d\n", ft_atoi_base(ft_revstr(box -> negative -> s_nbr), 2));
		box -> negative = box -> negative -> next;
	}
	while (box ->positive)
	{
		ft_printf("%d\n", ft_atoi_base(ft_revstr(box -> positive -> s_nbr), 2));
		box -> positive = box -> positive -> next;
	}
	*/
	free(box);
	return (merged);
}
/*
------free list-------------------
created negative and positive list;
also created one box variable with the type of t_signed_list.
begin
box
and box -> negative
	box -> positive
	lists are on the heap waiting.
*/
