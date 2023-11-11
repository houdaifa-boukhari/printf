#include "main.h"

/**
 * ft_putnbr_hexa - transfer nuber to hexa
 * @nb: number to transfer
 * @format: style to print
 *
 * Return: len to print
 */

int	ft_putnbr_hexa(char format, unsigned long nb)
{
	char	*base;
	char	*base1;
	int i = 1;

	base = "0123456789ABCDEF";
	base1 = "0123456789abcdef";
	if (nb >= 16)
	{
		i += ft_putnbr_hexa(format, nb / 16);
		ft_putnbr_hexa(format, nb % 16);
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
