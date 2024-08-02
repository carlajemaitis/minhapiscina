/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dictionary.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brnascim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 20:48:01 by brnascim          #+#    #+#             */
/*   Updated: 2024/07/27 20:59:50 by brnascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_read_dictionary(const char *name_dictionary)
{
	int	fd;
	char	buffer[50];
	int	i;

	fd = open(name_dictionary, 0_RDONLY);	
	while ((bytes_read = read(fd, &buffer[i], 1)) > 0)
	{
		if (buffer[i] == ':')
		{
			buffer[i] = '\0';
			valores[num_count] = ft_atoi(buffer);
			i = 0;
		}
		else if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			numbers[num_count] = ft_strdup(buffer);
			num_count++;
			i = 0;
		}
		else
			i++;
	}
	close(fd);
}
