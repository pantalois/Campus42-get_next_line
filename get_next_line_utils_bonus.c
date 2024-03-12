/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:34:48 by loigonza          #+#    #+#             */
/*   Updated: 2024/03/11 19:41:24 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *line)
{
	size_t	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	idx;
	size_t	idx_ptr;
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;

	if (s1 || s2)
	{
		s1_len = ft_strlen(s1);
		s2_len = ft_strlen(s2);
		idx_ptr = 0;
		ptr = malloc(sizeof(char) * (s1_len + s2_len + 1));
		if (!ptr)
			return (free(s1), NULL);
		idx = -1;
		while (++idx < s1_len)
			ptr[idx_ptr++] = s1[idx];
		idx = -1;
		while (s2[++idx] != '\0')
			ptr[idx_ptr++] = s2[idx];
		ptr[idx_ptr] = '\0';
		return (free(s1), ptr);
	}
	return (NULL);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	chr;
	char	*str;

	i = 0;
	chr = (char)c;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (&str[i]);
		else
			i++;
	}
	if (chr == '\0')
		return (&str[i]);
	else
		return (NULL);
}
