/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeller-@student.42sp.org.br <ekeller-@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 16:12:17 by ekeller-@st       #+#    #+#             */
/*   Updated: 2024/07/21 14:07:55 by ekeller-@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

void	draw_grid(int *input)
{
	char	temp;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			temp = '0' + input[k];
			write(1, &temp, 1);
			write(1, " ", 1);
			j++;
			k++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*int main(int argc, char *argv[])
{
    int answer[] = {1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4,4};    
    draw_grid(answer);
    return (0);
}*/
int	main(void)
{
	write(1, "Error\n", 10);
}
