/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:00:14 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/20 13:39:00 by jutcan           ###   ########.fr       */
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

void	ft_putnbr(int nb)
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

int	main(void)
{
	ft_putnbr(42);
}
