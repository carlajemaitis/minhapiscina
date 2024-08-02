/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:49:45 by catorres          #+#    #+#             */
/*   Updated: 2024/07/30 19:58:57 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			i ++;
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char	*str;

	str = "";
	printf ("A string é: %s\n", str);
	printf ("Logo, ela vai retornar: %d\n", ft_str_is_alpha (str));
	return (0);
}*/
