#include <stdio.h>

int main()
{
	int i, j, *a, *b;

	i = 9;
	j = 2;


	a = &i;
	b = &j;

	ft_ultimate_div_mod(a, b);
	printf("div = %i,mod = %i \n", *a, *b);
	return(0);
}