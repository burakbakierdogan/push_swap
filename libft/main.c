#include "libft.h"

int main ()
{
	t_radix_list *begin;
	int i;

	i = 1;
	int ar[20] = {-223232,1,-2,-2,3,-2,-2,223232,2,2,2,2,2,2,2,2,2,2,2,-3};
	begin = ft_radix_sort(ar, 19);
	//ft_printf("%s", ft_itoa_base_v2(223232, 2, 'X'));
	ft_printf("\n");
}
