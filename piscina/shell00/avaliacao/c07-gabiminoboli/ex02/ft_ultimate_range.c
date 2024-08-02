/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:20:55 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/31 11:08:39 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(sizeof(int) * (len));
	if (range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		i++;
	}
	return (len);
}

/*int main() {
    int min = 5;
    int max = 10;
    int *range;
    int len;
    
    len = ft_ultimate_range(&range, min, max);
    if (range == NULL) {
        printf("ERROR");
        return 1;
    }
    
    if (len == -1) {
        printf("ERROR");
        return 1;
    }
    printf("Comprimento do array: %d\n", len);
    return 0;
}*/
