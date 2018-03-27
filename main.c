/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

void display_h()
{
	my_putstr("\n\n\t\tHow to play\n\n");
	my_putstr("\tmove the X on the O with the P to win\n");
	my_putstr("\t   be careful not to block the X\n");
	my_putstr("\t\tDo your best !!!\n\n");
}

int	main(int ac, char **av)
{
	info_game *game = malloc(sizeof(info_game));

	if (ac > 1 && av[1][0] == '-' && av[1][1] == 'h')
		display_h();
	if (ac > 1) {
		game->map = get_files(av[1]);
		if (!check_for_map(game->map) || !check_for_P(game->map)) {
			my_putstr("\n\n\tBAD MAP\n\n");
			return (84);
		}
		game->pos_p = got_pos_p(game->map);
		game->pos_win = got_position(game->map);
		display_map(game);
	}
	return (0);
}
