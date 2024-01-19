/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfranke- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 14:23:27 by mfranke-          #+#    #+#             */
/*   Updated: 2024/01/19 11:29:00 by mfranke-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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
	static char	*static_buffer;
	char		*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	static_buffer = read_file(static_buffer, fd, buffer);
	if (!static_buffer)
		return (NULL);
	line = extract_line(static_buffer);
	static_buffer = clean_static(static_buffer, line);
	free (buffer);
	return (line);
}

/*#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int	fd = open("read_this.txt", O_RDONLY);
	char	*line;
	
	if (fd == -1)
	{
		perror ("Erro ao abrir o arquivo");
		return (-1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free (line);
		line = get_next_line(fd); // Move this line here
	}
	close(fd); //fecha o arquivo
	return (0);
}*/

/*#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*line;
	int		fd[argc - 1]; //argc e a posicao
	
	for (int i = 1; i < argc; i++)
	{
		fd[i - 1] = open (argv[i], O_RDONLY);
		if (fd[i - 1] == - 1)
		{
			printf("the file %s is not opening\n", argv[i]);
			continue;
		}
		line = get_next_line(fd[i - 1]);
		while (line != NULL)
		{
		printf("%s", line);
		free (line);
		line = get_next_line(fd[i - 1]); // Move this line here
		}
		close(fd[i - 1]); //fecha o arquivo
		printf("\n");
	}
	return (0);
}*/