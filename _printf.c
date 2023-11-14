#include "main.h"
#include <stdarg.h>

/**
 * ft_format - print by format
 * @args: the va_list entry pointer
 * @format: conversion specifier
 * @flags: the flags
 *
 * Return: the length of what we are going to print
 */

int ft_format(va_list args, const char format, char flags)
{
	void *p;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr('s', va_arg(args, char *)));
	else if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int), flags));
	else if (format == 'b')
		return (ft_putbinary(va_arg(args, unsigned int)));
	else if (format == 'S')
		return (ft_putSstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_putadress(p));
		return (ft_putstr('s', "(nil)"));
	}
	else if (format == 'x')
		return (ft_putnbr_hexa('x', va_arg(args, unsigned int), flags));
	else if (format == 'X')
		return (ft_putnbr_hexa('X', va_arg(args, unsigned int), flags));
	else if (format == 'o')
		return (ft_putoctal(va_arg(args, unsigned int), flags));
	else if (format == 'u')
		return (ft_putnbr(va_arg(args, unsigned int), flags));
	else if (format == 'r')
		return (ft_putstr('r', va_arg(args, char *)));
	return (-1);
}

/**
 * _printf - man 3 printf
 * @format: the conversion specifier
 *
 * Return: a magic length
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int len;

	va_start(args, format);
	i = 0;
	len = 0;
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	else if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i] != '\0' && i < ft_strlen(format))
	{
		/*if (format[i] == '%' && format[i + 1] && format[i + 2] &&
				ft_strchr("Xxdoiu%", format[i + 2]))
		{
			while (format[i + 1] == '+' || format[i + 1] == ' ' || format[i + 1] == '#')
			{
				len += ft_format(args, format[i + 2], ft_flags(format[i + 1]));
				i++;
			}
			i += 1;
		}*/
		if (format[i] == '%' && ft_strchr("csdbSpXxoiur%", format[i + 1]))
		{
			len += ft_format(args, format[i + 1], ft_flags(format[i + 1]));
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
