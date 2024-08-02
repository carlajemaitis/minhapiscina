/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thhenriq <thhenriq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:20:38 by thhenriq          #+#    #+#             */
/*   Updated: 2024/07/24 14:47:21 by thhenriq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	num;

	num = *b;
	*b = *a;
	*a = num;
}
// int	main()
// {
// 	int x = 10;
// 	int y = 20;

// 	printf("Valor antes da troca: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);

// 	printf("Valor depois da troca: x = %d, y = %d\n", x, y);

// 	return 0;
// }
