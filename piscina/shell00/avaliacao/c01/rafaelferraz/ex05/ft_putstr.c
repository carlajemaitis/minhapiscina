/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 02:52:50 by raferraz          #+#    #+#             */
/*   Updated: 2024/07/20 09:25:04 by raferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	l;

	l = 0;
	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_len(str));
}

/*
int	main()
{
	ft_putstr("Se acabar o brigadeiro, aceita bjin?!");
	return(0);
}
*/
