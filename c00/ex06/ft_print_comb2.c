/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 09:29:25 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/19 07:44:31 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_x(int x)
{
	char	ascii;

	if (x > 9)
	{
		ascii = '0' + x / 10;
		write (1, &ascii, 1);
		ascii = '0' + x % 10;
		write (1, &ascii, 1);
		write (1, " ", 1);
	}
	else
	{
		write (1, "0", 1);
		ascii = '0' + x;
		write (1, &ascii, 1);
		write (1, " ", 1);
	}
}

void	print_y(int x, int y)
{
	char	ascii;

	if (y > 9)
	{
		ascii = '0' + y / 10;
		write (1, &ascii, 1);
		ascii = '0' + y % 10;
		write (1, &ascii, 1);
		if (x != 98 || y != 99)
			write (1, ", ", 2);
	}
	else
	{
		write (1, "0", 1);
		ascii = '0' + y;
		write (1, &ascii, 1);
		write (1, ", ", 2);
	}
}

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
			print_x(x);
			print_y(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
