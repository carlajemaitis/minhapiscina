/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: catorres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:05:24 by catorres          #+#    #+#             */
/*   Updated: 2024/07/28 15:13:07 by catorres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX_NUM 50
#define MAX_WORD_LEN 50

char	*numbers[MAX_NUM];
unsigned long long	values[MAX_NUM];
int	num_count = 0;

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_strcpy(char *dest, const char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

void	ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
}

char	*ft_strdup(const char *s)
{
	int	len = ft_strlen(s);
	char	*new = (char *)malloc(len + 1);
	if (new == NULL)
		return (0);
	ft_strcpy(new, s);
	return (new);
}

long long	ft_atoi(const char *str)
{
	long long result = 0;
	int sign;
	
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

void	ft_read_dictionary(const char *file_name)
{
	char	buffer[MAX_WORD_LEN];
	int	i;
	ssize_t	bytes_read;
	int	fd;
	
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Erro ao abrir o arquivo\n", 24);
		_exit(1);
	}

	i = 0;
	while ((bytes_read = read(fd, &buffer[i], 1)) > 0)
	{
		if (buffer[i] == ':')
		{
			buffer[i] = '\0';
			values[num_count] = ft_atoi(buffer);
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
	if (bytes_read == -1)
	{
		write(2, "Erro na leitura do arquivo\n", 27);
		_exit(1);
	}
	close(fd);
}

void	ft_number_to_words(unsigned long long num, char *result)
{
	int	i;
	unsigned long long	quotient;

	i = num_count - 1;
	quotient = 0;
	if (num == 0){
		ft_strcpy(result, numbers[0]);
		return ;
	}
	while (i >= 0){
		if (num >= values[i] && values[i] != 0)
		{
			if (values[i] >= 100)
			{
				quotient = num / values[i];
				ft_number_to_words(quotient, result + ft_strlen(result));
				ft_strcat(result, " ");
			}
			ft_strcat(result, numbers[i]);
			num %= values[i];
			if (num > 0)
			{
				ft_strcat(result, " ");
			}
		}
		i--;
	}
}

int	error(void)
{
	write(2, "Error\n", 6);
	return (1);
}

int	main(int argc, char *argv[])
{
	long long	num;
	char	*dictionary;
	char	*result;

	result = (char *)malloc(1000);
	dictionary = "numbers.dict";
	if (argc < 2 || argc > 3)
		return (error());
	if (argc == 3)
	{
		dictionary = argv[1];
		num = ft_atoi(argv[2]);
	}
	else
	{
		num = ft_atoi(argv[1]);
	}
	if (num < 0)
		return (error());
	ft_read_dictionary(dictionary);
	if (num_count == 0)
		return (error());
	ft_number_to_words(num, result);
	write(1, result, ft_strlen(result));
	write(1, "\n", 1);
	free(result);
	return 0;
}
