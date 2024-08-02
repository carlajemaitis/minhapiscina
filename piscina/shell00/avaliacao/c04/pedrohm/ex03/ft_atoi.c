/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedro-hm <pedro-hm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:32:13 by pedro-hm          #+#    #+#             */
/*   Updated: 2024/07/25 13:46:22 by pedro-hm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
		}
		else if (*str == '-')
		{
			sign *= -1;
		}
		else if ((*str >= 'a' && *str >= 'z') || (*str >= 'A' && *str >= 'Z'))
			break ;
		str++;
	}
	return (result * sign);
}
