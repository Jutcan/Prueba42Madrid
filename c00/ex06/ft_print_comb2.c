/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:29:25 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/16 23:13:38 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
}

void	ft_print_comb2(void)
{
	int	x1;
	int	x2;
	int	y1;
	int	y2;

	x1 = 0;
	while (x1 <= 9)
	{
		x2 = 0;
		while (x2 <= 9)
		{
			y1 = 0;
			while (y1 <= 9)
			{
				y2 = 0;
				while (y2 <= 9)
				{
					validator(x1, x2, y1, y2);
					y2++;
				}
				y1++;
			}
			x2++;
		}
		x1++;
	}
}
/*
void	main(void)
{
	ft_print_comb2();
}
*/
