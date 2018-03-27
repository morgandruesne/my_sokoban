/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** sokoban
*/

#include "include.h"

int	check_lose_up(char *str, int i)
{
	if (str[i + l_line(str)] == '#')
		return (1);
	return (0);
}

int	check_lose_down(char *str, int i)
{
	if (str[i - l_line(str)] == '#')
		return (1);
	return (0);
}

int	check_lose_left(char *str, int i)
{
	if (str[i + 1] == '#')
		return (1);
	return (0);
}

int	check_lose_right(char *str, int i)
{
	if (str[i - 1] == '#')
		return (1);
	return (0);
}

int	got_point_of_lose(char *str, int i)
{
	int compt = 0;

	compt += check_lose_up(str, i);
	compt += check_lose_down(str, i);
	compt += check_lose_left(str, i);
	compt += check_lose_right(str, i);
	if (compt >= 2)
		return (2);
	return (compt);
}
