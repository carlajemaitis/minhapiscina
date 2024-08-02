/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:51:38 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/31 12:58:37 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str [i] >= '0' && str [i] <= '9'))
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
	int	numb;

	numb = ft_str_is_numeric("hello");
	printf("%d\n", numb);
	numb = ft_str_is_numeric("050896");
	printf("%d\n", numb);
	return (0);
}*/
