/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 01:45:22 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/20 02:35:06 by raferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}
/*
#include <stdio.h>

int	main()
{
	int a = 20;
	int b = 10;
	printf("original a: %d\n original b: %d\n", a, b );
	ft_ultimate_div_mod(&a, &b);
	printf("ultimate a: %d\n ultimate b: %d\n", a, b );
}
*/
