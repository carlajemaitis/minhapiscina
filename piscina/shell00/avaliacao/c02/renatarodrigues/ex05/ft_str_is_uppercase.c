/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:01:27 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/31 14:10:13 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str [i] != '\0')
	{
		if (! (str[i] >= 65 && str[i] <= 90))
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

	string = ft_str_is_uppercase("hello");
	printf("%d\n", string);
	string = ft_str_is_uppercase("WORLD");
	printf("%d\n", string);
	string = ft_str_is_uppercase("050896");
	printf("%d\n", string);
	return (0);
}*/
