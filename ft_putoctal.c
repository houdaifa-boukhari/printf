#include "main.h"

/**
 * ft_putoctal - transfer nuber to octal
 * @nb: number to transfer
 * @flags: the flags
 * Return: len to print
 */

int	ft_putoctal(long nb, char flags)
{
	char digite;
	int i;

	i = 1;
	if (flags == '#')
	{
		i += ft_putchar('0');
		flags = '%';
	}
	if (nb >= 8)
	{
		i += ft_putoctal(nb / 8, flags);
		ft_putoctal(nb % 8, flags);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (i);
}
