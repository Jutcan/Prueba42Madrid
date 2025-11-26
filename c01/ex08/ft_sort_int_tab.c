/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 08:15:39 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/26 07:48:38 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_pos(int *tab, int i, int pos_lower)
{
	int	aux;

	aux = tab[i];
	tab[i] = tab[pos_lower];
	tab[pos_lower] = aux;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	pos_lower;
	int	lower;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		lower = tab[j];
		pos_lower = j;
		while (j < size)
		{
			if (lower > tab[j])
			{
				lower = tab[j];
				pos_lower = j;
			}
			j++;
		}
		change_pos(tab, i, pos_lower);
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[] = {8,3,5,1,4,2};
	int	i = 0;
	int	size = 6;
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf(" Antes \n");
	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d",tab[i]);
		i++;
	}
	printf(" Después \n");
}*/
