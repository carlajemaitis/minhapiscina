/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 09:29:48 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/20 14:33:40 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

#include <stdio.h>
int	main()
{
	int	storage;
	char	*str;

	str = "Não fui eu, ou será que foi?";
	storage = ft_strlen(str);
	printf("%s\n", str);
	printf("Quantidade de caracteres: %d\n", storage);
	return(0);
}

