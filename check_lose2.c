/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

int	check_lose(char *str)
{
	int i = 0;
	int compX = 0;
	int comp_for_lose = 0;

	for (i = 0; str[i]; i++)
		if (str[i] == 'X') {
			compX++;
			comp_for_lose += got_point_of_lose(str, i);
		}
	if (comp_for_lose / 2 >= compX) {
		endwin();
		my_putstr("LOSE\n");
		exit (2);
	}
	return (0);

}
