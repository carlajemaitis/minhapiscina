/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 13:14:25 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/31 22:52:35 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if ((c == ' ') || ((c >= 9) && (c <= 13)))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	n;
	int	minus;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		minus = 0;
		if (str[i] == '-')
			minus++;
		i++;
	}
	j = 0;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	if ((minus % 2) == 1)
		n = -n;
	return (n);
}
