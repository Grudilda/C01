#include <stdio.h>

int main()
{
	int i, j, *a, *b;

	i = 2;
	j = -2;

	a = &i;
	b = &j;

	printf("i = %i,j = %i \n", *a, *b);
	ft_swap(a, b);
	printf("i = %i,j = %i \n", *a, *b);
	return(0);
}