#include <stdio.h>

int main()
{
	int len;
	char *str;

	len = 0;
	str = "Hello World !";
	len = ft_strlen(str);
	printf("len = %i\n", len);
	return(0);
}