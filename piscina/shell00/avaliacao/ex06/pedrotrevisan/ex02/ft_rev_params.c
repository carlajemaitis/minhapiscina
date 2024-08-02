/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:49:04 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/07/29 15:17:07 by ptrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
	{
		write (1, &str[leng], 1);
		leng++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	i--;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (argc);
}
