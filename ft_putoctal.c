#include "main.h"

/**
 * ft_putoctal - transfer nuber to octal
 * @nb: number to transfer
 *
 * Return: len to print
 */

int	ft_putoctal(long nb)
{
	char digite;
	int i;

	i = 1;
	if (nb >= 8)
	{
		i += ft_putoctal(nb / 8);
		ft_putoctal(nb % 8);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (i);
}
