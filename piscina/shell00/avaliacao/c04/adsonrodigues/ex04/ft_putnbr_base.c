/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:19:04 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/31 22:42:27 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_check(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	put_converted_gt0(long int lnbr, int size, char *base)
{
	if (lnbr >= size)
		put_converted_gt0((lnbr / size), size, base);
	ft_putchar(base[lnbr % size]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	lnbr;
	int			size;

	lnbr = (long int)nbr;
	size = count_check(base);
	if (size <= 1)
		return ;
	if (lnbr < 0)
	{
		ft_putchar('-');
		lnbr = -lnbr;
	}
	put_converted_gt0(lnbr, size, base);
}
