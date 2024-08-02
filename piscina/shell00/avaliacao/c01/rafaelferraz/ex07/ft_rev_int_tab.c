/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:57:15 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/20 11:56:04 by raferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	indice;
	int	temp;

	indice = 0;
	while (indice < size)
	{
		temp = tab[indice];
		tab[indice] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		indice++;
	}
}
/*
#include<stdio.h>

void loop_a(int *a)
{
    int indice = 0;

    printf("a =");
    while (indice < 5)
    {
        a[indice] = indice;
        printf(" %d", a[indice]);
        indice++;
    }
    printf("\n");
}

int main(void)
{
	int a[5];
	int indice;

	loop_a(&a);
	ft_rev_int_tab(&a, 5);
	printf("a =");
	while (indice < 5)
	{
		printf(" %d", a[indice]);
		indice++;
	}
    printf("\n");

	return 0;
}
*/
