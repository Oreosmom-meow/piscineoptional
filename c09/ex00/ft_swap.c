/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeng <ydeng@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:38:47 by ydeng             #+#    #+#             */
/*   Updated: 2024/06/30 17:38:27 by ydeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int x;
	int y;
	x = 1;

	y = 2;

	printf ("The value before swap: %d %d\n", x, y);
	ft_swap(&x, &y);
	printf ("The value after sawp: %d %d\n", x, y);
	return (0);
}*/
