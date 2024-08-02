/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:39:41 by catorres          #+#    #+#             */
/*   Updated: 2024/07/18 17:22:41 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main()
{
	int a = 20;
	int b = 10;

	printf("O valor de a = %d e o valor do b = %d\n", a ,b);
	ft_ultimate_div_mod(&a, &b);
	printf("O valor de a agora é = %d e o valor de b agora é = %d", a , b);
}
*/
