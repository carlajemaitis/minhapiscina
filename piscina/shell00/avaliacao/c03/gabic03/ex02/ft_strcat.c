/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:29:42 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/18 14:46:31 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*begin;

	*begin = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}

int main()
{
 	char dest[30]= "42 school";
 	char src[] = " is rock";

 	ft_strcat(dest, src);

 	printf("%s\n", dest);
 	return (0);
}
