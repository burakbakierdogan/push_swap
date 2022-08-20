#include <stdlib.h>
#include <stdio.h>


typedef struct s_list
{
	struct	s_list	*next;
	int				data;
}					t_list;

t_list *ft_new(t_list *begin, int data)
{
	t_list *new;

	new = (t_list *) malloc (sizeof(t_list));
	new -> data = data;
	new -> next = NULL;
	begin -> next = new;
	return (new);
}

int main (void)
{
	t_list *begin;
	t_list	*hold;
	int		n;

	begin = (t_list *) malloc (sizeof(t_list));
	hold = begin;
	if (!begin)
		return (0);
	n = 1;
	begin -> data = n;
	n++;
	while (n <= 10)
		begin  = ft_new(begin, n++);
	begin = hold;
	while (begin != NULL)
	{
		printf("%d\n", begin -> data);
		begin = begin -> next;
	}
}
