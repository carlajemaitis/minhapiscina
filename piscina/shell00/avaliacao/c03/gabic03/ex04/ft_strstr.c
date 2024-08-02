/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:58:25 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/18 11:25:54 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{	
	char	*start;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		start = str;
		while (*to_find != '\0' && *str == *to_find)
		{
			str++;
			to_find++;
		}
		if (*to_find == '\0')
		{
			return (start);
		}
		to_find = start;
		str = start + 1;
	}
	return (NULL);
}

// int	main() {
//     char str[] = "42 school is the best";
//     char to_find[] = "42";
//
//     char *result = ft_strstr(str, to_find);
//
//     if (result) {
//         printf("Substring encontrada: %s\n", result);
//     } else {
//         printf("Substring não encontrada.\n");
//     }
//
//     return 0;
// }