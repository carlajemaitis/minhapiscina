/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 22:30:47 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/19 23:45:52 by raferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int	main()
{
	int a = 77;
	int b = 11;

	printf("original de a: %d\n", a);
	printf("original de b: %d\n", b);
	ft_swap(&a, &b);
	printf("swap de a: %d\n", a);
	printf("swap de b: %d\n", b);
	return(0);
}
*/
