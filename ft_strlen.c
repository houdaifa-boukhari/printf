#include "main.h"

/**
 * ft_strlen - calcule len to str
 * @str: string to calcul
 * Return: len str
 */

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 1;
	while (str[i])
		i++;
	return (i);
}
