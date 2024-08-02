/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gapachec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:17:29 by gapachec          #+#    #+#             */
/*   Updated: 2024/08/01 12:02:23 by gapachec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ind;

	ind = 0;
	while (argv[0][ind])
	{
		write (1, &argv[0][ind], 1);
		ind++;
	}
	write (1, "\n", 1);
	(void) argc;
	return (0);
}
