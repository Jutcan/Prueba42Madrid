/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 08:40:39 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/15 09:26:16 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_write(int a, int b, int c)
{
	char	ascii;

	ascii = '0' + a;
	write (1, &ascii, 1);
	ascii = '0' + b;
	write (1, &ascii, 1);
	ascii = '0' + c;
	write (1, &ascii, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				print_write(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	main(void)
{
	ft_print_comb();
}
