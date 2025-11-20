/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:44:58 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/20 17:26:02 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_print_combn(int n)
{
	char	ascii;
	int	digit;
	int	i;

	if (n > 0 && n < 10)
	{
		i = 0;
		digit = 1;
		while (i < n)
		{
			digit = digit * 10;
			i++;
		}
	}
	i = 0;
	while (i < digit)
	{
		printf("%d ", i);
		i++;
	}
}

int	main(void)
{
	ft_print_combn(2);
}
