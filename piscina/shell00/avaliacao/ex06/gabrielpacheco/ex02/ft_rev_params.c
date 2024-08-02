/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:44:40 by gapachec          #+#    #+#             */
/*   Updated: 2024/08/01 11:52:59 by gapachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ind;
	int	ind_p;

	if (argc > 1)
	{
		ind_p = argc - 1;
		while (ind_p > 0)
		{
			ind = 0;
			while (argv[ind_p][ind])
			{
				write(1, &argv[ind_p][ind], 1);
				ind++;
			}
			write(1, "\n", 1);
			ind_p--;
		}
	}
	return (0);
}
