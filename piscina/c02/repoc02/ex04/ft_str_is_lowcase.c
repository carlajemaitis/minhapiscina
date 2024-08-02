/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 17:58:09 by catorres          #+#    #+#             */
/*   Updated: 2024/07/30 19:32:46 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	*str;

	str = "";
	printf ("Minha string é: %s\n", str);
	printf ("Logo ela vai retornar: %d\n", ft_str_is_lowercase(str));
	return (0);
}*/
