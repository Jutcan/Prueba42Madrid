/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:29:25 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/18 18:50:49 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
/*
void	print_write(int x1, int x2, int y1, int y2)
{
	char	ascii;

	ascii = '0' + x1;
	write (1, &ascii, 1);
	ascii = '0' + x2;
	write (1, &ascii, 1);
	write (1, " ", 1);
	ascii = '0' + y1;
	write (1, &ascii, 1);
	ascii = '0' + y2;
	write (1, &ascii, 1);
	if (x1 != 9 || x2 != 8 || y1 != 9 || y2 != 9)
	{
		write (1, ", ", 2);
	}
}

void	validator(int x1, int x2, int y1, int y2)
{
	if (y1 > x1)
	{
		print_write(x1, x2, y1, y2);
	}
	else
	{
		if (y1 == x1)
		{
			if (y2 > x2)
			{
				print_write(x1, x2, y1, y2);
			}
		}
	}
}*/

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			printf("%02d %02d, ",x,y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}

