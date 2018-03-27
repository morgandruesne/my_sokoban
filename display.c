/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

void display_map2(char *part)
{
	int i = 0;
	int line = 0;
	int colun = 0;

	clear();
	while (part[i]) {
		if (part[i] == '\n') {
			line++;
			colun = -1;
		}
		printw("%c", part[i]);
		colun++;
		i++;
	}
}

void display_map(info_game *game)
{
	initscr();
	noecho();
	clear();
	while (game->map != NULL || game->map[0] == 'L') {
		refresh();
		display_map2(game->map);
		game->map = move_map(game);
	}
}
