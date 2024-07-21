#include <unistd.h>

void	print_grid(char arr[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_safe(int board[N][N], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	while (i < col)
	{
		if (board[row][i] != 0)
			return 0;
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j>= 0)
	{
		if(board[i][j] != 0)
			return 0;
		i--;
		j--;
	}
	i = row;
	j = col;
	while 
int	main(void)
{
	char	arr[4][4] = {".Q..",
			     "...Q",
			     "Q...",
			     "..Q." };
	
	print_grid(arr);
	return (0);
}
