/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:14:22 by renrodri          #+#    #+#             */
/*   Updated: 2024/08/01 15:45:46 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
	i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	int	printable;

	printable = ft_str_is_printable("Hello, world!");
	printf("%d\n", printable);
	printable = ft_str_is_printable("\n");
	printf("%d\n", printable);
	printable = ft_str_is_printable("");
        printf("%d\n", printable);
	return (0);
}
void	prtstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}