#include "libft.h"

int main ()
{
	t_radix_list *begin;
	int i;

	i = 1;
	int ar[20] = {-1,-2,-3,-4,5,6,7,8,9,10,11,-12,13,14,-15,16,17,-18,19,-20};
	begin = ft_radix_sort(ar, 19);
	while (begin)
	{
		ft_printf("pozitif sayi= %s ||", begin ->nbr);
		begin = begin -> next;
		i++;
	}
	ft_printf("\n");
}
