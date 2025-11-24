/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 08:02:34 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/24 18:18:45 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {4,2};
	int	i = 0;
	while (i < 2)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf(" Antes \n");
	ft_rev_int_tab(tab, 2);
	i = 0;
	while (i < 2)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf(" Después \n");
}*/
