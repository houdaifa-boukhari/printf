#include "main.h"

/**
 * len1 - calcule lenght the number
 * @nb: nb to calcul
 *
 * Return: len to number
 */

int len1(int nb)
{
	int i;

	i = 1;
	while (nb >= 2)
	{
		nb /= 2;
		i++;
	}
	return (i);
}

/**
 * ft_putbinary - transfer number to binary
 * @nb: number to transfer
 *
 * Return: len to print
 */

int ft_putbinary(unsigned int nb)
{
	char digite;
	unsigned int n = len1(nb);

	if (nb >= 2)
	{
		ft_putbinary(nb / 2);
		ft_putbinary(nb % 2);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (n);
}
