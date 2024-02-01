#include <stdio.h>

int main()
{
	int i, j, n, o, *a, *b;

	i = 9;
	j = 2;
	n = 0;
	o = 0;

	a = &n;
	b = &o;

	ft_div_mod(i, j, a, b);
	printf("n = %i,o = %i \n", *a, *b);
	return(0);
}