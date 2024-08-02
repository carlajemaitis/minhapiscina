/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:27:09 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/21 16:43:44 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			j = 0;
		}
		i++;
	}
	return (j);
}


int main() 
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello123";
    char str3[] = "12345";

    // Testando ft_str_is_alpha com os exemplos acima
    printf("ft_str_is_alpha(\"%s\") = %d\n", str1, ft_str_is_alpha(str1));
    printf("ft_str_is_alpha(\"%s\") = %d\n", str2, ft_str_is_alpha(str2));
    printf("ft_str_is_alpha(\"%s\") = %d\n", str3, ft_str_is_alpha(str3));

    return 0;
}

