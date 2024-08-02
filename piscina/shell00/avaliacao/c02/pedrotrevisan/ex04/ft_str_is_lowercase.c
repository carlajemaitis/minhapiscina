/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:06:41 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/21 12:48:47 by ptrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main()
	char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "12345";

    // Testando ft_str_is_alpha com os exemplos acima
    printf("ft_str_is_lowercase(\"%s\") 
	= %d\n", str1, ft_str_is_lowercase(str1));
    printf("ft_str_is_lowercase(\"%s\") 
	= %d\n", str2, ft_str_is_lowercase(str2));
    printf("ft_str_is_lowercase(\"%s\") 
	= %d\n", str3, ft_str_is_lowercase(str3));

    return 0;
}
*/