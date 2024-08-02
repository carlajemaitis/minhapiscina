/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunogue <brunogue@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 04:57:45 by brunogue          #+#    #+#             */
/*   Updated: 2024/07/31 13:50:50 by brunogue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	if (nb < 0)
		return (0);
	i = 1;
	f = 1;
	while (i <= nb)
	{
		f = f * i;
		i++;
	}
	return (f);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/