#include "main.h"

/**
 * ft_putadress - print adress to hexa
 * @adress: addres to print
 *
 * Return: len to print
 */

int	ft_putshexa(unsigned long nb)
{
	char *base;
	int i;
	char *p;

	base = "0123456789ABCDEF";
	i = 2;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (-1);
	p[i--] = '\0';
	while (nb && i >= 0)
	{
		p[i--] = base[nb % 16];
		nb /= 16;
	}
	p[0] = '0';
	i = 0;
	while (p[i])
		write(1, &p[i++], 1);
	free (p);
	return (i);
}
