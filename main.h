#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_putchar(char c);
int	ft_putstr(char format, char *str);
int	ft_putSstr(char *str);
int	ft_strlen(const char *str);
int    ft_putnbr(long nb, char flags);
int    ft_putnbr_hexa(char format, unsigned long nb, char flags);
int _printf(const char *format, ...);
int ft_putbinary(unsigned int nb);
int     ft_putadress(void *adress);
int	ft_putoctal(long nb, char flags);
char	*ft_strchr(const char *s, int c);
int     ft_putshexa(unsigned long nb);
char ft_flags(char c);

#endif
