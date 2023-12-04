#include "main.h"

/**
 * ft_putSstr - ptint string
 * @str: string to printf
 *
 * Return: len to print
 */

int	ft_putSstr(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!str)
		return (ft_putstr('s', "(null)"));
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			j += ft_putchar(str[i]);
		else if (str[i] < 32 || str[i] >= 127)
		{
			j += ft_putstr('s', "\\x");
			j += ft_putshexa((unsigned long)str[i]);
		}
		i++;
	}
	return (j);
}
