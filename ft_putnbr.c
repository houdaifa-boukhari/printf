#include "main.h"

/**
 * ft_putnbr - utilze printing integers
 * @nb: the integer
 * @flags: the flags
 * Return: len to number
 */

int	ft_putnbr(long nb, char flags)
{
	char digite;
	int i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i += ft_putchar('-');
	}
	else if (flags == '+')
	{
		i += ft_putchar('+');
		flags = '%';
	}
	else if (flags == ' ')
	{
		i += ft_putchar(' ');
		flags = '%';
	}
	if (nb >= 10)
	{
		i += ft_putnbr(nb / 10, flags);
		ft_putnbr(nb % 10, flags);
	}
	else
	{
		digite = nb + 48;
		ft_putchar(digite);
	}
	return (i);
}
