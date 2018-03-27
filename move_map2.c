/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

void	get_move_map(info_game *game)
{
	int caractere;

	caractere = getch();
	switch (caractere) {
		case KEY_LEFT:
			game = move_q(game);
			break;
		case KEY_RIGHT:
			game = move_d(game);
			break;
		case KEY_UP:
			game = move_z(game);
			break;
		case KEY_DOWN:
			game = move_s(game);
			break;
		}
	if (caractere == 32) {
		endwin();
		exit (2);
	}
}

char *move_map(info_game *game)
{
	int i = 0;
	int e = 0;

	check_o(game);
	i = check_win(game);
	e = check_lose(game->map);
	if (i == 1)
		return (NULL);
	if (e == 2)
		return ("LOSE");
	keypad(stdscr, TRUE);
	game->pos_p = got_pos_p(game->map);
	get_move_map(game);
	return (game->map);
}
