#include "main.h"

/**
 * ft_strlen - calcule len to str
 * @str: string to calcul
 * Return: len str
 */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
