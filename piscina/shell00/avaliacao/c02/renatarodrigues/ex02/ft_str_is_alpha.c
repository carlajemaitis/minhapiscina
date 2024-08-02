/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:41:12 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/31 20:21:37 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str [i] >= 'A' && str [i] <= 'Z')
				|| (str [i] >= 'a' && str [i] <= 'z')))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	int	string;

	string = ft_str_is_alpha("hello");
	printf("%d\n", string);
	string = ft_str_is_alpha("123");
	printf("%d\n", string);
	return (0);
}*/
