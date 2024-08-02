/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_words.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brnascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:17:17 by brnascim          #+#    #+#             */
/*   Updated: 2024/07/27 20:31:20 by brnascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_number_words(long num, char *result)
{
	long	i;
	long	quotient;

	quotient = 0;
	i = num_count - 1;
	if (num == 0)
	{
		ft_strcpy(result, numbers[0]);
		return ;
	}
	while (i >= 0)
	{
		if (num >= valores[i] && valores[i] != 0)
		{
			if (valores[i] >= 100)
			{
				quotient = num / valores[i];
				ft_number_words(quotient, result);
				ft_strcat(result, " ");
			}
			ft_strcat(result, numbers[i]);
			num %= valores[i]
				if (num > 0)
				ft_strcat(result, " ");
		}
		i++;
	}
}
