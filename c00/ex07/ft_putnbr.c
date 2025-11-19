/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:00:14 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/19 18:53:20 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char	ascii[12];
	int		i;

	i = 0;
	while (nb > 9 || nb < -9)
	{
		ascii[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	if (nb > -10 && nb < 10)
	{
		ascii[i] = nb + '0';
		i++;
	}

	ascii[i] = '\0';
	while (ascii[i--] >= 0)
	{
		write (1, &ascii[i], 1);
	}
}

int	main(void)
{
	ft_putnbr(-42);
}
