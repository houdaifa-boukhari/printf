#include "main.h"
/**
 * len2  - calcule len to nb
 * @nb: nb to calcul
 *
 * Return: len
 */

int len2(long nb)
{
	int i;

	i = 1;
	while (nb >= 16)
	{
		nb /= 16;
		i++;
	}
	return (i);
}
/**
 * ft_putshexa  - print nb to hexa
 * @nb: nb to print
 *
 * Return: len to print
 */

int	ft_putshexa(unsigned long nb)
{
	char *base;
	int i;
	int j;
	char *p;

	j = len2(nb);
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
	if (j == 1)
		p[0] = '0';
	i = 0;
	while (p[i])
		write(1, &p[i++], 1);
	free(p);
	return (i);
}
