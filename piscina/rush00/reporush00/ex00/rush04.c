/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:00:42 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/14 20:44:23 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	mostrar_linha(int c1, int l1, int c2, int l2)
{
	if ((c2 == 0 && l2 == 0) || (c2 == c1 - 1 && l2 == 0))
	{
		ft_putchar('A');
	}
	else if ((c2 == 0 && l2 == l1 -1) || (c2 == c1 - 1 && l2 == l1 - 1))
	{
		ft_putchar('C');
	}
	else if ((l2 == 0 || l2 == l1 - 1) || (c2 == 0 || c2 == c1 - 1))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	mostrar_erro(void)
{	
	ft_putchar('E');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('R');
	ft_putchar('O');
	ft_putchar('R');
	ft_putchar('\n');
}

void	rush(int c1, int l1)
{
	int	c2;
	int	l2;

	c2 = 0;
	l2 = 0;
	if (l1 < 0 || c1 < 0)
	{
		return (mostrar_erro());
	}
	while (l2 < l1)
	{
		while (c2 < c1)
		{
			mostrar_linha(c1, l1, c2, l2);
			c2++;
		}
		ft_putchar('\n');
		c2 = 0;
		l2++;
	}
}
