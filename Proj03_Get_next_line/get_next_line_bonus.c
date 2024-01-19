/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:47:25 by mfranke-          #+#    #+#             */
/*   Updated: 2024/01/19 12:23:44 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*read_file(char *static_buffer, int fd, char *buffer)
{
	ssize_t	read_id;

	read_id = 1;
	while (read_id > 0 && ft_strchr(static_buffer, '\n') == NULL)
	{
		read_id = read(fd, buffer, BUFFER_SIZE);
		if (read_id == -1)
		{
			free(buffer);
			free(static_buffer);
			return (NULL);
		}
		buffer[read_id] = '\0';
		static_buffer = ft_strjoin(static_buffer, buffer);
	}
	return (static_buffer);
}

char	*extract_line(char	*static_buffer)
{
	size_t	i;
	char	*line;

	i = 0;
	if (!static_buffer[i]) 
		return (NULL);
	while (static_buffer[i] && static_buffer[i] != '\n')
		i++;
	if (static_buffer[i] == '\0')
		line = (char *)malloc(sizeof(char) * (i + 1));
	else
		line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (static_buffer[i] && static_buffer[i] != '\n')
	{
		line[i] = static_buffer[i];
		i++;
	}
	if (static_buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*copy_str(char *static_buffer, char *new_buffer, size_t s, size_t e)
{
	size_t	i;

	i = s;
	while (i < e)
	{
		new_buffer[i - s] = static_buffer[i];
		i++;
	}
	new_buffer[i - s] = '\0';
	return (new_buffer);
}

char	*clean_static(char *sb, char *print_line)
{
	size_t	len;
	size_t	i;
	char	*new_buffer;

	len = ft_strlen(sb) - ft_strlen(print_line);
	if (len == 0)
	{
		free(sb);
		return (NULL);
	}
	new_buffer = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_buffer)
		return (NULL);
	i = 0;
	while (sb[i] && sb[i] != '\n')
		i++;
	i++;
	new_buffer = copy_str(sb, new_buffer, i, ft_strlen(sb));
	free (sb);
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	static char	*static_buffer[MAX_FD];
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	static_buffer[fd] = read_file(static_buffer[fd], fd, buffer);
	if (!static_buffer[fd])
		return (NULL);
	line = extract_line(static_buffer[fd]);
	static_buffer[fd] = clean_static(static_buffer[fd], line);
	free (buffer);
	return (line);
}

/*#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	char	*line;
	int		i;
	int		fd;
	int		fd2;
	int		fd3;
	i = 0;
	fd = open("read_this.txt", O_RDONLY);
	fd2 = open("read_this2.txt", O_RDONLY);
	fd3 = open("read_this3.txt", O_RDONLY);
	line = "Existencia";
	while (i++ < 4)
	{
		line = get_next_line(fd);
		while (line != NULL)
		{
		printf("%s", line);
		free (line);
		line = get_next_line(fd); // Move this line here
		}
		line = get_next_line(fd2);
		while (line != NULL)
		{
		printf("%s", line);
		free (line);
		line = get_next_line(fd2); // Move this line here
		}
		line = get_next_line(fd3);
		while (line != NULL)
		{
		printf("%s", line);
		free (line);
		line = get_next_line(fd3); // Move this line here
		}
	}
	free(line);
	close(fd);
	return (0);
}*/