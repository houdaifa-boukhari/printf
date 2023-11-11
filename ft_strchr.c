#include "main.h"

/**
 * ft_strchr - cherche in charcter to string
 * @s: string
 * @c: character to cherch
 * Return: character
 */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
