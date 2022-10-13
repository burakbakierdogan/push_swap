#include "libft.h"

int main ()
{
	t_radix_list *begin;
	int i;

	i = 1;
	int ar[20] = {-2,1,-2,-2,3,-2,-2,2,2,2,2,2,2,2,2,2,2,2,2,-3};
	begin = ft_radix_sort(ar, 19);
	ft_printf("\n");
}
