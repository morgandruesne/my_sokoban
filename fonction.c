/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	my_putstr(char const *str)
{
	int	i = 0;

	for (i = 0; str[i] != '\0'; i++)
		my_putchar(str[i]);
	return (0);
}

int	my_strlen(char const *str)
{
	int	i = 0;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++);
	return (i);
}

char	*concat(char *dest, char *src)
{
	int size_src = my_strlen(src);
	int size_dest = my_strlen(dest);
	int i = 0;
	char *final = malloc(sizeof(char)*(size_src + size_dest) + 1);

	if (size_src < 0 || size_dest < 0 || final == NULL)
		return (NULL);
	for (int j = 0; dest[j] != '\0'; i++ , j++)
		final[i] = dest[j];
	for (int j = 0; src[j] != '\0'; j++ , i++)
		final[i] = src[j];
	final[i] = '\0';
	return (final);
}

int	l_line(char *str)
{
	int i = 0;

	for (i = 0; str[i - 1] != '\n'; i++);
	return (i);
}
