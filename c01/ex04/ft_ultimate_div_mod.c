/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 20:29:53 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/23 20:54:23 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	if (*b != 0)
	{
		aux = *a / *b;
		*b = *a % *b;
		*a = aux;
	}
}
/*
#include <stdio.h>
int	main()
{
	int	a = 4;
	int	b = 2;
	int	*p_a = &a;
	int	*p_b = &b;

	ft_ultimate_div_mod(p_a, p_b);
	printf("a %d b %d \n",*p_a,*p_b);
}*/
