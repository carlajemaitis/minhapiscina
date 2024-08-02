/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 11:18:41 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/21 12:48:24 by ptrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "12345";

    printf("ft_str_is_uppercase(\"%s\") 
	= %d\n", str1, ft_str_is_uppercase(str1));
    printf("ft_str_is_uppercase(\"%s\")
	 = %d\n", str2, ft_str_is_uppercase(str2));
    printf("ft_str_is_uppercase(\"%s\") 
	= %d\n", str3, ft_str_is_uppercase(str3));

    return 0;
}
*/