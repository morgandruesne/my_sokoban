/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

int	got_pos_p(char *str)
{
	int i = 0;

	for (i = 0; str[i] != 'P'; i++);
	return (i);
}

int	*got_array(int *array_2, char *str, int comp)
{
	int i = 0;
	int i_array = 0;

	array_2 = malloc(sizeof(int) * comp + 1);
	for (i = 0; str[i]; i++) {
		if (str[i] == 'O') {
			array_2[i_array] = i;
			i_array++;
		}
	}
	return (array_2);
}

int	*got_position(char *str)
{
	int i = 0;
	int comp = 0;
	int *array_2 = NULL;

	for (i = 0; str[i]; i++) {
		if (str[i] == 'O') {
			comp++;
		}
	}
	array_2 = got_array(array_2, str, comp);
	return (array_2);
}
