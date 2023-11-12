#include "main.h"
/**
 * ft_putstr - prints a string
 * @kda: the adress of the string
 *
 * Return: the length of it
 */
int ft_putstr(char *kda)
{
	int i;

	if (kda == NULL)
		write(1,"Error", 5);
	i = 0;
	while(kda[i])
	{
		ft_putchar(kda[i]);
		i++;
	}
	return (strlen(kda));
}
