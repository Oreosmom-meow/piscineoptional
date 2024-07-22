/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeng <ydeng@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:07:30 by ydeng             #+#    #+#             */
/*   Updated: 2024/07/22 12:18:54 by yutong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define x 4
#define y 4


void	print_grid(int arr[4][4])
{
	int	i;
	int	j;	
	char	anne;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (arr[i][j] != 0)
			{
				anne = arr[i][j] + '0';
				write(1, &anne, 1);
				write(1, " ", 1);
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	is_safe(int board[x][y], int row, int col, int num)
{
	int 	i;
	int	j;

	i = 0;
	while (i < col)
	{
		if (board[row][i] == num)
			return (0);
		i++;
	}
	j = 0;
	while (j < row)
	{
		if (board[j][col] == num)
			return (0);
		j++;
	}
	return (1);
}

int	solve_until(int	board[x][y])
{
	int	row;
	int	col;
	int	num;

	row = 0;
	col = 0;
	num = 1;
	if (col >= x)
		return (1);
	while (row < x && num < 5)
	{
		if (is_safe(board, row, col, num) == 1)
		{
			printf("row= %d, col = %d, num = %d\n", row,col,num);
			board[row][col] = num;
			if (solve_until(board) != 0)
				return (1);
			printf("row = %d, col = %d, num = %d\n", row,col,num);
			board[row][col] = 0;
		}
		row++;
		col++;
		num++;
	}
	return (0);
}
int	main(void)
{
	int     board[x][y] = {{0, 0, 0, 0},
                               {0, 0, 0, 0},
                               {0, 0, 0, 0},
                               {0, 0, 0, 0}};
	if (solve_until(board) == 0)
	{
		write(1, "There is no solution", 20);
		return (0);
	}
	print_grid(board);
	return(1);
}
