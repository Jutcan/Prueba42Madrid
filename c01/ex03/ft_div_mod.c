/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 19:47:55 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/23 20:27:16 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
#include <stdio.h>
int	main()
{
	int div;
	int mod;
	int *p_div;
	int *p_mod;

	p_div = &div;
	p_mod = &mod;

	ft_div_mod(5, 0, p_div, p_mod);
	printf("div %d mod %d \n",*p_div,*p_mod);
	ft_div_mod(555, 5, p_div, p_mod);
	printf("div %d mod %d \n",*p_div,*p_mod);
	ft_div_mod(11, 4, p_div, p_mod);
	printf("div %d mod %d \n",*p_div,*p_mod);
}*/
