#include "main.h"

/**
 * ft_binary - binary printer func
 * @n: the unsigned int that we wanna convert
 *
 * Return: length of n
 */

int ft_binary(unsigned int n)
{
	int i;

	i = 0;
		if (n > 1)
		{
			i += ft_binary(n / 2);
			ft_binary(n % 2);
		}
		else
		{
			ft_putchar(n + '0');
		}
	return (i);
}
/* treate the return values */
