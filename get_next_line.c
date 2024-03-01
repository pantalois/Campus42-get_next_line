/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:06:10 by loigonza          #+#    #+#             */
/*   Updated: 2024/03/01 13:27:00 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include "get_next_line.h"

char *get_next_line(int fd)
{
	int				bytes_read;
	char			*buffer;
	static char 	*line;


	buffer = malloc(BUFFER_SIZE + 1 * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
//	fd = open("archivo.txt", O_RDONLY);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read == 0)
		return (NULL);
	if (!line)
		line = ft_strdup(buffer);
	else
		line = ft_strjoin(line, buffer);
	if (bytes_read < BUFFER_SIZE)
		buffer[bytes_read] = '\0';
	if (buffer == NULL)
		return (NULL);
	if (bytes_read <= 0)
		return (NULL);
	free(buffer);
	//printf("%s\n", 
	return (line);
}

int main(void)
{
	char *next_line;
	int fd = open("archivo.txt", O_RDONLY);
	while (1)
	{
		next_line = get_next_line(fd);
		if (next_line == NULL)
			break ;
		//printf("%s", next_line);
	}
	printf("%s", next_line);
	free (next_line);
	return (0);
}

