#include <stdio.h>

int main()
{
	int i = 0;
	int *nbr;

	nbr = &i;
	printf("%i\n", *nbr);
	ft_ft(nbr);
	printf("%i\n", *nbr);
	return(0);
}