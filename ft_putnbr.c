#include "main.h"

/**
 * ft_putnbr - print number
 * @nb: number to print
 *
 * Return: len to number
 */

int	ft_putnbr(long nb)
{
	char digite;
	int i;
	
	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i += ft_putchar('-');
	}
	if (nb >= 10)
	{
		i +=ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (i);
}
