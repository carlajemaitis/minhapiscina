/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:02:57 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/31 09:49:34 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include<stdio.h>

int	string_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	string_get_cat_length(char **strs, char *sep, int size)
{
	int	i;
	int	sep_len;
	int	total_len;

	sep_len = string_get_length(sep);
	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += string_get_length(strs[i]);
		if (i < size - 1)
			total_len += sep_len;
		i++;
	}
	return (total_len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat_string;
	int		i;
	int		total_len;

	total_len = string_get_cat_length(strs, sep, size) + 1;
	cat_string = malloc(sizeof(char) * total_len);
	*cat_string = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(cat_string, strs[i]);
		if (i < size - 1)
			ft_strcat(cat_string, sep);
		i++;
	}
	return (cat_string);
}

/*int main(void)
{
	char *str[] = {"42", "school", "is", "rock"};
	char sep[] = {"|"};

	char *strs = ft_strjoin(4, str, sep);
	printf("%s\n", strs);
    free(strs);
}*/
