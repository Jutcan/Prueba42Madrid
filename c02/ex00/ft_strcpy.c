/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jutcan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 07:49:59 by jutcan            #+#    #+#             */
/*   Updated: 2025/11/26 08:15:01 by jutcan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *dest;
	char *src = "";
	
	strcpy(dest, src);
	printf("%s\n",dest);

	*ft_strcpy(dest, src);
	printf("%s\n",dest);
}*/
