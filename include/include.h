/*
** EPITECH PROJECT, 2017
** my_ls
** File description:
** header
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ncurses.h>
#include <fcntl.h>
#include "structure.h"
#include <unistd.h>

#ifndef _MY_SOKOBAN_
#define _MY_SOKOBAN_

int	l_line(char *str);
void	my_putchar(char c);
int	got_pos_p(char *str);
int	check_lose(char *str);
int	check_for_P(char *str);
void	display_map2(char *part);
int	check_for_map(char *str);
void	check_o(info_game *game);
int	*got_position(char *str);
char	*b_0(char *str, int size);
char	*move_map(info_game *game);
void	display_map(info_game *game);
int	check_win(info_game *game);
info_game *move_d(info_game *game);
info_game *move_q(info_game *game);
info_game *move_z(info_game *game);
info_game *move_s(info_game *game);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
char	*concat(char *dest, char *src);
int	check_lose_up(char *str, int i);
char	*get_files(char const *filepath);
int	check_lose_left(char *str, int i);
int	check_lose_down(char *str, int i);
int	check_lose_right(char *str, int i);
int	got_point_of_lose(char *str, int i);
char	*fs_read(int fd, char *buffer, int size);
int	*got_array(int *array_2, char *str, int comp);


#endif
