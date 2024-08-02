/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:31:24 by gapachec          #+#    #+#             */
/*   Updated: 2024/08/01 12:01:09 by gapachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ind;
	int	ind_p;

	if (argc > 1)
	{
		ind_p = 1;
		while (ind_p < argc)
		{
			ind = 0;
			while (argv[ind_p][ind])
			{
				write(1, &argv[ind_p][ind], 1);
				ind++;
			}
			write(1, "\n", 1);
			ind_p++;
		}
	}
	return (0);
}
