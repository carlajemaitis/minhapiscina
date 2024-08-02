/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:27:32 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/18 11:12:24 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*begin;

	begin = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
		*dest = '\0';
	return (begin);
}

// int main() {
//     char dest[30] = "42school"; // String de destino
//     char src[] = " is the best"; // String fonte
//     unsigned int nb = 4; // Número de caracteres a serem concatenados

//     // Chama a função ft_strncat
//     ft_strncat(dest, src, nb);

//     // Exibe a string concatenada
//     printf("%s\n", dest);

//     return 0;
// }