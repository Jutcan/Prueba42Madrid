/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:00:14 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/23 15:22:29 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char_array(char ascii[], int i)
{
	while (i >= 0)
	{
		write (1, &ascii[i], 1);
		i--;
	}
}

void	validator(int nb)
{
	char	ascii[12];
	int		i;
	int		sign;

	i = 0;
	if (nb < 0)
	{
		sign = 1;
		nb = nb * -1;
	}
	if (nb == 0)
		write (1, "0", 1);
	while (nb > 0)
	{
		ascii[i] = '0' + (nb % 10);
		nb = nb / 10;
		i++;
	}
	if (sign == 1)
	{
		ascii[i] = 45;
		i++;
	}
	ascii[i] = '\0';
	print_char_array(ascii, i - 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
		validator(nb);
}
/*
int	main(void)
{
	ft_putnbr(42);
}*/
