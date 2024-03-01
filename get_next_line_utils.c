/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:30:15 by loigonza          #+#    #+#             */
/*   Updated: 2024/03/01 13:26:57 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
/*
void	*ft_calloc(int count, int size)
{
	char 	*ptr;
	int		i;

	ptr = malloc(count * size);
	if(!ptr)
		return (NULL);
	else
		i = 0;
	while (i != count)
	{
		ptr[i] = '\0';
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}*/

size_t ft_strlen(const char *line)
{
	size_t i;

	i = 0;
	while (line[i] != '\0')
		i++;
	//line[i] = '\0';
	return (i);
}

char	*ft_strdup(char *s1)
{
	static char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (i--)
	{
		ptr[j] = s1[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	idx;
	size_t	idx_ptr;
	static char	*ptr;

	idx_ptr = 0;
	if (!s1 && !s2)
		return (0);
	ptr = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!ptr)
		return (0);
	ptr[0] = '\0';
	idx = -1;
	while (s1[++idx] != '\0')
	{
		ptr[idx_ptr] = s1[idx];
		idx_ptr++;
	}
	idx = -1;
	while (s2[++idx] != '\0')
	{
		ptr[idx_ptr] = s2[idx];
		idx_ptr++;
	}
	ptr[idx_ptr] = '\0';
	return (ptr);
}
