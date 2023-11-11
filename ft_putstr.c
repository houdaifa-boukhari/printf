#include "main.h"

/**
 * ft_putstr - ptint string
 * @str: string to printf
 * @format: style to print
 * Return: len to print
 */

int	ft_putstr(char format, char *str)
{
	int i;

	i = ft_strlen(str);
	if (format == 'r')
	{
		i--;
		while (i >= 0)
		{
			ft_putchar(str[i]);
			i--;
		}
	}
	else if (format == 's')
		write(1, str, i);
	return (ft_strlen(str));
}
