/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 00:00:53 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/20 01:07:36 by raferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main()
{
	int a = 77;
	int b = 7;
	int div;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("*div: %d\n", div);
	printf("*mod: %d\n", mod);	
}
*/
