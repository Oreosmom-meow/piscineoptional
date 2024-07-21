/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeng <ydeng@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 12:07:30 by ydeng             #+#    #+#             */
/*   Updated: 2024/07/21 15:10:44 by yutong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	print_grid(int arr[4][4])
{
	int	i;
	int	j;	
	char	anne;
	
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			anne = arr[i][j] + '0';
			write(1, &anne, 1);
			write(1, " ", 1);
			j++;
		}
		anne = arr[i][j] + '0';
		write(1, &anne, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	is_safe(

int	main(void)
{
	int	x = 4;
	int	y = 4;
	int	num = 1;
	
	int	arr[x][y] = {{1, 2, 3, 4},
			     {2, 3, 2, 1},
		             {3, 2, 3, 4},
			     {4, 3, 2, 1}};
	x = 0;
	while (num < 4)
	{
		while (x < 4)
		{
			y = 0;
			while (y < 4)
			if (arr[x][y] == num)
				y++;
			else 
			{
				num++;
				y++;




	print_grid(arr);
}
