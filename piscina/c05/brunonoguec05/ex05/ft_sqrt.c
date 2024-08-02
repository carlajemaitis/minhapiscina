/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:08:45 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/31 14:19:22 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (res * res <= nb && res <= 46340)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    printf("%d", ft_sqrt(25));
    return (0);
}*/