
#include <stdio.h>

int main()
{
	int tab[10];
	int size, i;

	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	tab[5] = 5;
	tab[6] = 6;
	tab[7] = 7;
	tab[8] = 8;
	tab[9] = 9;
	size = 10;

	
	ft_rev_int_tab(tab, size);
	for (i = 0 ; i < 10 ; i++)
    {
        printf("%d\n", tab[i]);
    }
	return 0;
}
