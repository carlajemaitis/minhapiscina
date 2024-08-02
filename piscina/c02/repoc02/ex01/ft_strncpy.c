/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:50:28 by catorres          #+#    #+#             */
/*   Updated: 2024/07/30 18:48:59 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}	
	return (dest);
}
/*int	main(void)
{
	unsigned int	n;
	char	dest[15];
	char	*src;

	n = 10;
	src = "Oi";
	printf("Origem: %s\n", src);
	strncpy(dest, src, n);
	printf("Destino: %s\n", dest);
	return (0);
}*/
