#include "main.h"

/**
 * ft_putchar - print character
 * @c: character to print
 * Return: len to print
 */

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
