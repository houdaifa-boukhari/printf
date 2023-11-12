#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
int _printf(const char *format, ...);
int ft_binary(unsigned int n);
int ft_octal(long n);
int ft_unsigned(unsigned int n);
int ft_putchar(char c);
int ft_putnbr(int n);
int ft_func(char c, ...);
int ft_putstr(char *kda);
#endif
