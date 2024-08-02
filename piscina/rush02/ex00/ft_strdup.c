/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brnascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:34:00 by brnascim          #+#    #+#             */
/*   Updated: 2024/07/27 20:47:04 by brnascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *s)
{
	char	*new;
	int	len;

	len = ft_strlen(s);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, s);
	return (new);
}
