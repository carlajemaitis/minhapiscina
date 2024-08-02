/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:29:19 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/21 16:50:21 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main() 
{
    char str1[] = "HELLO";
    char str2[] = "\n";
    char str3[] = "12345";

    // Testando ft_str_is_alpha com os exemplos acima
    printf("ft_str_is_printable(\"%s\") = %d\n", str1, ft_str_is_printable(str1));
    printf("ft_str_is_printable(\"%s\") = %d\n", str2, ft_str_is_printable(str2));
    printf("ft_str_is_printable(\"%s\") = %d\n", str3, ft_str_is_printable(str3));

    return 0;
}

