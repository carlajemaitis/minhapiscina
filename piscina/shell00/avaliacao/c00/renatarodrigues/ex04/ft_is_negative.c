/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:43:50 by renrodri          #+#    #+#             */
/*   Updated: 2024/07/23 14:10:32 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n > 0)
	{
		write(1, "P\n", 1);
	}
	else
	{
		write(1, "N\n", 1);
	}
}

int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(0);
i	ft_is_negative(10);
	return (0);
}
