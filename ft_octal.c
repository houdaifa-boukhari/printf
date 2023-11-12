#include "main.h"
/**
 * ft_octal - prints in octal presentation
 * @n: the number
 *
 * Return: the length
 */
int	ft_octal(long n)
{
	char digit;
	int i;

	i = 1;
	if (n >= 8)
	{
		i += ft_octal(n / 8);
		ft_octal(n % 8);
	}
	else
	{
		digit = n + 48;
		ft_putchar(digit);
	}
	return (i);
}
