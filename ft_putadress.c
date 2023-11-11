#include "main.h"

/**
 * len - calcule len to nb
 * @nb: number to calcul
 *
 * Return: len to nb
 */

int len(unsigned long nb)
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
 * ft_putadress - print adress to hexa
 * @adress: addres to print
 *
 * Return: len to print
 */

int	ft_putadress(void *adress)
{
	char *base;
	unsigned long addres;
	unsigned int i;
	char *p;

	addres = (unsigned long)adress;
	base = "0123456789abcdef";
	i = len(addres);
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (-1);
	write(1, "0x", 2);
	p[i--] = '\0';
	while (addres)
	{
		p[i--] = base[addres % 16];
		addres /= 16;
	}
	i = 0;
	while (p[i])
		write(1, &p[i++], 1);
	free (p);
	return (i + 2);
}
