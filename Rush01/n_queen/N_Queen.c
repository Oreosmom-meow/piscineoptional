#include <unistd.h>
#define size 5

void	print_grid(int arr[size][size])
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i][j] != 0)
				write(1, "Q", 1);
			else
				write(1, ".", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_safe(int board[size][size], int row, int col)
{
	int	i;
	int	j;

	i = 0;
	//Doing the job for boarder check. 
	while (i < col)
	{
		//check if the Q is already existing on the same row or not 
		if (board[row][i] == 1)
			return 0;
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j>= 0)
	{
		//check if the Q is already on the upper diagonal or not. 
		if(board[i][j] == 1)
			return 0;
		i--;
		j--;
	}
	i = row;
	j = col;
	while (i < size && j >= 0)
	{
		//check if the Q is on the lower diagonal or not. 
		if (board[i][j] == 1)
			return 0;
		i++;
		j--;
	}
	//if the Q is not on those position, continue to write Q in the grid
	return (1);
}

int	solve_until(int board[size][size], int col)
{
	int	i;

	i = 0;
	//The goal: when will the loop stop
	if (col >= size) //when we write until the end of the column
		return 1;
	//The choice: what choice we make at end call of the function
	while (i < size)
	{
		//The constrains: if Q doesn't exisit in the places we checked
		if (is_safe(board, i, col) == 1)
		{	
			board[i][col] = 1;
			//THe choice: recursively calculate until the end of the column
			if (solve_until(board, col + 1) == 1)
				return 1;
			//The redo: if the constrains is met, we restart from the top
			board[i][col] = 0;
		}
		//Go to the next row
		i++;
	}
	return (0);
}

int	solve(void)
{
	int	board[size][size] = {{0, 0, 0, 0},
			             {0, 0, 0, 0},
			             {0, 0, 0, 0},
			             {0, 0, 0, 0}};
	
	if (solve_until(board, 0) == 0)
	{
		write(1, "There is no solution", 20);
		return (0);
	}
	print_grid(board);
	return (1);
}

int	main(void)
{
	solve();
	return (0);
}
