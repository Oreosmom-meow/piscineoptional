
void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	j = 0;
	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			j = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = j;
			i = 0;
		}
		else
			i++;
	}
}
