#include "main.h"
/**
 * ft_unsigned - prints unsigned int
 * @n : the usnigned int
 *
 * Return: the length of n
 */

/* TREAT THE RETURN VALUE */
int ft_unsigned(unsigned int n)
{
	int i;

	i = 0;
	if (n > 9)
	{
		i += ft_unsigned(n / 10);
		ft_unsigned(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (i);
}
