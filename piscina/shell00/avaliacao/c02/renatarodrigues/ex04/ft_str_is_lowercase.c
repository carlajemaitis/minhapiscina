/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:05:00 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/31 13:21:51 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (!(str [i] >= 97 && str [i] <= 122))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	int	string;

	string = ft_str_is_lowercase("hello");
	printf("%d\n", string);
	string = ft_str_is_lowercase("World!");
	printf("%d\n", string);
	string = ft_str_is_lowercase("1234");
	printf("%d\n", string);
	return (0);
}*/
