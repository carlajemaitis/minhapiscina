/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptrevisa <ptrevisa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:02:45 by ptrevisa          #+#    #+#             */
/*   Updated: 2024/08/01 13:11:29 by ptrevisa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	while (argv[0][len] != '\0' && argc)
	{
		len++;
	}
	write(1, argv[0], len);
	write(1, "\n", 1);
	return (0);
}
