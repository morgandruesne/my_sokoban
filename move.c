/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

info_game *move_d(info_game *game)
{
	int i = 0;

	if (game->map[game->pos_p + 1] != '#') {
		if (game->map[game->pos_p + 1] != 'X') {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p+=1] = 'P';
			check_o(game);
			display_map2(game->map);
			i++;
		}
		if (game->map[game->pos_p + 1] == 'X' &&
		game->map[game->pos_p + 2] != '#' &&
		game->map[game->pos_p + 2] != 'X' && !i) {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p+=1] = 'P';
			game->map[game->pos_p+=1] = 'X';
			check_o(game);
			display_map2(game->map);
		}
	}
	return (game);
}

info_game *move_q(info_game *game)
{
	int  i = 0;

	if (game->map[game->pos_p - 1] != '#') {
		if (game->map[game->pos_p - 1] == 'X' &&
		game->map[game->pos_p - 2] != '#' &&
		game->map[game->pos_p - 2] != 'X') {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p-=1] = 'P';
			game->map[game->pos_p-=1] = 'X';
			check_o(game);
			display_map2(game->map);
			i = 1;
		}
		if (game->map[game->pos_p - 1] != 'X' && !i) {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p-=1] = 'P';
			check_o(game);
			display_map2(game->map);
		}
	}
	return (game);
}

info_game *move_z(info_game *game)
{
	int i = 0;

	if (game->map[game->pos_p - l_line(game->map)] != '#') {
		if (game->map[game->pos_p - l_line(game->map)] == 'X' &&
		game->map[game->pos_p - 2*l_line(game->map)] != '#' &&
		game->map[game->pos_p - 2*l_line(game->map)] != 'X') {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p -= l_line(game->map)] = 'P';
			game->map[game->pos_p -= l_line(game->map)] = 'X';
			check_o(game);
			display_map2(game->map);
			i = 1;
		}
		if (game->map[game->pos_p - l_line(game->map)] != 'X' && !i) {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p -= l_line(game->map)] = 'P';
			check_o(game);
			display_map2(game->map);
		}
	}
	return (game);
}

info_game *move_s(info_game *game)
{
	int i = 0;

	if (game->map[game->pos_p + l_line(game->map)] != '#') {
		if (game->map[game->pos_p + l_line(game->map)] == 'X' &&
		game->map[game->pos_p + 2*l_line(game->map)] != '#' &&
		game->map[game->pos_p + 2*l_line(game->map)] != 'X') {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p += l_line(game->map)] = 'P';
			game->map[game->pos_p += l_line(game->map)] = 'X';
			check_o(game);
			display_map2(game->map);
			i = 1;
		}
		if (game->map[game->pos_p + l_line(game->map)] != 'X' && !i) {
			game->map[game->pos_p] = ' ';
			game->map[game->pos_p += l_line(game->map)] = 'P';
			check_o(game);
			display_map2(game->map);
		}
	}
	return (game);
}
