#include "main.h"

/**
 * lenght - calcule lenght the number
 * @nb: number to calcul
 *
 * Return: len
 */

int lenght(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

/**
 * ft_putnbr - print number
 * @nb: number to print
 *
 * Return: len to number
 */

int	ft_putnbr(long nb)
{
	long n = nb;
	char digite;

	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (lenght(n));
}
