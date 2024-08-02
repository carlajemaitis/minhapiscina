/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabminob@student.42.fr <gabminob@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:24:11 by gabminob@st       #+#    #+#             */
/*   Updated: 2024/07/31 11:06:19 by gabminob@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	*array;
	int	i;

	len = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * len);
	if (array == 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int main() {
    int min = 10;
    int max = 10;
    int *range;
    int i;
    int len;

    
    range = ft_range(min, max);
    if (range == NULL) {
        printf("ERROR");
        return 1;
    }   
    len = max - min;   
    printf("Elementos do Array:\n");
    i = 0;
    while (i < len) {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    
	return 0;
}*/
