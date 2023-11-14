#include "main.h"

/**
 * ft_putnbr_hexa - transfer nuber to hexa
 * @nb: number to transfer
 * @format: style to print
 * @flags: the flags
 *
 * Return: len to print
 */

int	ft_putnbr_hexa(char format, unsigned long nb, char flags)
{
	char	*base;
	char	*base1;
	int i = 1;

	base = "0123456789ABCDEF";
	base1 = "0123456789abcdef";
	if (format == 'X' && flags == '#')
	{
		i += ft_putstr('s', "0X");
		flags = '%';
	}
	else if (format == 'x' && flags == '#')
	{
		i += ft_putstr('s', "0x");
		flags = '%';
	}
	else if (flags == ' ')
	{
		i += ft_putchar(' ');
		flags = '%';
	}
	if (nb >= 16)
	{
		i += ft_putnbr_hexa(format, nb / 16, flags);
		ft_putnbr_hexa(format, nb % 16, flags);
	}
	else
	{
		if (format == 'X')
			write(1, &base[nb], 1);
		else if (format == 'x')
			write(1, &base1[nb], 1);
	}
	return (i);
}
