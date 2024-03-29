/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loigonza <loigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 17:42:58 by loigonza          #+#    #+#             */
/*   Updated: 2024/03/11 19:21:28 by loigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 15
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

char	*get_next_line(int fd);
void	*ft_calloc(int count, int size);
size_t	ft_strlen(const char *line);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_read_file(int fd, char *line);
char	*ft_create_line(char *buffer, char *line);
char	*ft_strchr(const char *s, int c);
char	*free_static(char **stash);

#endif
