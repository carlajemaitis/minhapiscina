/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 15:48:43 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/21 12:37:00 by ptrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main() 
{
    char str1[] = "HelloWorld";
    char str2[] = "";
    char str3[] = "12345";

    // Testando ft_str_is_alpha com os exemplos acima
    printf("ft_str_is_numeric(\"%s\") = %d\n", str1, ft_str_is_numeric(str1));
    printf("ft_str_is_numeric(\"%s\") = %d\n", str2, ft_str_is_numeric(str2));
    printf("ft_str_is_numeric(\"%s\") = %d\n", str3, ft_str_is_numeric(str3));

    return 0;
}
*/
