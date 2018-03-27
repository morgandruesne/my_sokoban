/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

void	check_o(info_game *game)
{
	int i = 0;

	for (i = 0; game->pos_win[i]; i++)
	if (game->map[game->pos_win[i]] == ' ' ||
	game->map[game->pos_win[i]] == '#')
	game->map[game->pos_win[i]] = 'O';
}

int	check_for_map(char *str)
{
	int i;
	int comp = 0;

	for (i = 0; str[i]; i++) {
		if (str[i] == ' ' || str[i] == '#' || str[i] == 'P' ||
		str[i] == 'O' || str[i] == '\n' || str[i] == 'X')
			comp++;
		}
	if (i == comp)
		return (1);
	return (0);
}

int	check_for_P(char *str)
{
	int i;
	int comp = 0;

	for (i = 0; str[i]; i++) {
		if (str[i] == 'P')
			comp++;
		}
	if (comp != 1)
		return (0);
	return (1);
}

int	check_win(info_game *game)
{
	int i = 0;
	int comp = 0;

	for (i = 0; game->pos_win[i]; i++)
	if (game->map[game->pos_win[i]] == 'X')
		comp++;
	if (i == comp) {
		endwin();
		my_putstr("win\n");
		exit (0);
	}
	return (0);
}
