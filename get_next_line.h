/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:42:58 by loigonza          #+#    #+#             */
/*   Updated: 2024/03/01 12:23:14 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10
# endif

#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
char	*get_next_line(int fd);
void	*ft_calloc(int count, int size);
size_t	ft_strlen(const char *line);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);

#endif
