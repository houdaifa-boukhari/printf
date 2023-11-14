#include "main.h"

/**
 * ft_flags - choose correct flags
 * @c: the character
 *
 * Return: character
 */

char  ft_flags(char c)
{
	if (c == '+')
		return ('+');
	else if (c == ' ')
		return (' ');
	else if (c == '#')
		return ('#');
	return ('\0');
}
