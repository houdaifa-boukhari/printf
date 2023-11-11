#include "main.h"

/**
 * len_octal - calcule lenght the number
 * @nb: nb to calcul
 *
 * Return: len to number
 */

int len_octal(long nb)
{
	int i;

	i = 1;
	if (nb >= 8)
	{
		nb /= 8;
		i++;
	}
	return (i);
}
/**
 * ft_putoctal - transfer nuber to octal
 * @nb: number to transfer
 *
 * Return: len to print
 */

int	ft_putoctal(long nb)
{
	char digite;
	long n = nb;

	if (nb >= 8)
	{
		ft_putoctal(nb / 8);
		ft_putoctal(nb % 8);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (len_octal(n));
}
