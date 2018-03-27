/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

char	*b_0(char *str, int size)
{
	int i = -1;

	if (str == NULL)
		if ((str = malloc(sizeof(char) * (size + 1))) == NULL)
			return (NULL);
	while (++i < size)
		str[i] = 0;
	return (str);
}

char	*fs_read(int fd, char *buffer, int size)
{
	int i = 0;
	int c = 1;
	char *buff = NULL;

	while (c) {
		buff = b_0(buff, size);
		i = read(fd, buff, size);
		if (i < size)
			c = 0;
		buffer = concat(buffer, buff);
	}
	return (buffer);
}

char	*get_files(char const *filepath)
{
	int	fd;
	int	size = 1024;
	char	*buffer = NULL;

	if ((buffer = malloc(sizeof(char) * (size + 1))) == NULL)
		return (NULL);
	fd = open(filepath, O_RDONLY);
	if (fd == -1)
		exit (84);
	buffer = fs_read(fd, buffer, size);
	close(fd);
	return (buffer);
}
