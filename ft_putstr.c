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

	if (str)
		i = ft_strlen(str);
	if (format == 'r')
	{
		i--;
		while (i >= 0)
		{
			ft_putchar(str[i - 1]);
			i--;
		}
	}
	else if (format == 's')
	{
		if (!str)
			return (write(1, "(null)", 6));
		else
			return (write(1, str, ft_strlen(str)));
	}
	return (ft_strlen(str));
}
