/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_merge_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berdogan <berdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:31:45 by berdogan          #+#    #+#             */
/*   Updated: 2022/10/13 17:31:45 by berdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	struct s_radix_b
{
	t_radix_list	*box_0;
	t_radix_list	*box_1;
	t_radix_list	*hold;
	t_radix_list	*hold1;
}					t_radix_box;


static	void	ft_rev(t_radix_list *negative, t_radix_list *positive)
{
	while (negative)
	{
		ft_revstr(negative -> nbr);
		negative = negative -> next;
	}
	while (positive)
	{
		ft_revstr(positive -> nbr);
		positive = positive -> next;
	}
}

t_radix_list	*ft_sort_merge_lists(t_radix_list *negative, t_radix_list *positive)
{

	//t_radix_list	*sorted_neg;
	//t_radix_list	*sorted_pos;
	//t_radix_list	*merged;

	ft_rev(negative, positive);
	//sorted_pos = ft_sort(positive);
	//sorted_neg = ft_sort(negative);
	ft_printf("%d\n", ft_find_maxsize_str(positive));
	ft_printf("%d\n", ft_find_maxsize_str(negative));
	ft_free_with_content(negative);
	ft_free_with_content(positive);
	//merged = ft_merge(sorted_neg, sorted_pos);
	//ft_rev(merged, NULL);
	return(NULL);
}
