/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 17:13:44 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/23 19:49:06 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
/*
#include <stdio.h>
int	main()
{
	int	number_a = 42;
	int	number_b = 24;
	int	*a;
	int	*b;

	a = &number_a;
	b = &number_b;
	
	printf("Dirección puntero a %p\n",a);
	printf("Dirección puntero b %p\n",b);
	printf("Valores viejos a=%d b=%d\n\n",*a,*b);
	
	ft_swap(a, b);
	
	printf("Dirección puntero a %p\n",a);
	printf("Dirección puntero b %p\n",b);
	printf("Valores nuevos a=%d b=%d\n\n",*a,*b);
	
}*/
