#include "main.h"

/**
 * ft_putnbr - integers printer func
 * @n: the int that we wanna print
 *
 * Return: length of n
 */
/* TREAT THE RETURN VALUES */
int ft_putnbr(int n)
{
	int i;

	i = 0;
	if (n <= INT_MAX && n >= INT_MIN)
	{
		if(n == INT_MIN)
		{
			write(1,"-2147483648",11);
			i = 11;
		}
		else if (n == INT_MAX)
		{
			i += ft_putchar('2');
			ft_putnbr(147483647);
		}
		else if (n < 0)
		{
			ft_putchar('-');
			ft_putnbr(-n);
		}
		else if (n > 9)
		{
			i += ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar(n + '0');
		}
	}
	return (i);
}
