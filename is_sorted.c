#include <stdio.h>
#include <stdlib.h>

int main (int ac, char *argv[])
{
	int	*ptr;

	ptr = malloc (sizeof(int) * (ac - 1));
	int i = 0;
	while (i < ac - 1)
	{
		ptr[i] = atoi(argv[i+1]);
		i++;
	}
	int len = 0;
	while (len < i)
	{
		printf("%d ",ptr[len++]);
	}
	printf("\n");
	len = 0;
	while (len < i)
	{
		if (ptr[len] >= ptr[len + 1])
		{
			printf("KO\n");
			return (0);
		}
		if (ptr[len + 1] >= i)
			break;
		len++;
	}
	printf("OK");
	printf("\n");
}
