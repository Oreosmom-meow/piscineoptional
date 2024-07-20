#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	*a;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		a[i] = tab[i];
		i++;
	}
	i = 0;	
	while (i < size)
	{
		tab[i] = a[j];
		i++;
		j--;
	}
}
