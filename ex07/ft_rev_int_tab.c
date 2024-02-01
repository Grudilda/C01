void ft_rev_int_tab(int *tab, int size)
{
	int j;
	int i;
	int size_mod;
	
	j = 0;
	i = 0;
	size_mod = size - 1;
	while (j<(size/2))
	{
		i = tab[j];
		tab[j] = tab[size_mod-j];
		tab[size_mod-j] = i;
		j++;
	}
}