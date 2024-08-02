/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:20:38 by catorres          #+#    #+#             */
/*   Updated: 2024/07/30 15:34:39 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] +32;
			i++;
	}
	return (str);
}
/*int	main(void)
{
	char teste[] = "EI, MUNDO!";

	printf("Minha string está em maiúsculo: %s\n", teste);
	printf("Agora ela está em minúsculo: %s\n", ft_strlowcase(teste));
	return (0);
}*/

/*int	main(void)
{
	char teste[] = "EI, MUNDO!\n";

	write(1, &teste, 12);
	ft_strlowcase(teste);
	write(1, &teste, 12);
	return (0);
}*/
