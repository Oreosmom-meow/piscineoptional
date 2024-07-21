/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeng <ydeng@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:34:35 by ydeng             #+#    #+#             */
/*   Updated: 2024/07/07 15:55:02 by ydeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*str_to_arr(int *dest, char *src)
{
	int	i;
	int reali;
	
	i = 0;
	reali = 0;

	while (reali < 16)
	{	
		if (((i % 2 != 0) &&  src[i] != ' ') || ((i % 2 == 0) && (!(src[i] >= 49 && src[i] <= 52))))
			{
                		write(1, "Error\n", 7);
             		}
	        
		if (src[i] == ' ')
			{
				i++;
			} 
		else 
			{
				dest[reali] = src[i] - '0';
				i++;
				reali++;
			}
	}

	
	if (reali != 16)
	write(1, "Only 16 digits are acceptable.\n",31); 
	
	dest[reali] = 0;
	return (dest);
}
