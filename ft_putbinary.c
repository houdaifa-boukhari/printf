#include "main.h"

/**
 * ft_putbinary - transfer number to binary
 * @nb: number to transfer
 *
 * Return: len to print
 */

int ft_putbinary(unsigned int nb)
{
	char digite;
	int i;

	i = 1;
	if (nb >= 2)
	{
		i += ft_putbinary(nb / 2);
		ft_putbinary(nb % 2);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (i);
}
