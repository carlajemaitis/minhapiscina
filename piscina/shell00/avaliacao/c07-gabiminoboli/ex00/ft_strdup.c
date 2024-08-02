/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:53:46 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/31 09:47:21 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
//#include <stdio.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	size_t	len;
	char	*dest;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(len + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	*original;
	char	*copy;

	original = "Hello, World!";


	copy = ft_strdup(original);
	if (copy == NULL)
	{
		printf("Failed to allocate memory");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);

	return (0);
}*/
