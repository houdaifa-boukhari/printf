#include "main.h"

/**
 * ft_putSstr - ptint string
 * @str: string to printf
 *
 * Return: len to print
 */

int	ft_putSstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\x0", 3);
			ft_putnbr_hexa('X', (long)str[i]);
		}
		i++;
	}
	return (ft_strlen(str));
}
