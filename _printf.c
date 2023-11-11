#include "main.h"
#include <stdarg.h>

/**
 * ft_format - print by format
 * @args: arguments passet by parametre
 * @format: style to print
 *
 * Return: len to print
 */

int ft_format(va_list args, const char format)
{
	void *p;

	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_putstr('s', va_arg(args, char *)));
	else if (format == '%')
		return (ft_putchar('%'));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (format == 'b')
		return (ft_putbinary(va_arg(args, unsigned int)));
	else if (format == 'S')
		return (ft_putSstr(va_arg(args, char *)));
	else if (format == 'p')
	{
		p = va_arg(args, void *);
		if (p)
			return (ft_putadress(p));
		return (ft_putstr('s', "0x0"));
	}
	else if (format == 'x')
		return (ft_putnbr_hexa('x', va_arg(args, unsigned long)));
	else if (format == 'X')
		return (ft_putnbr_hexa('X', va_arg(args, unsigned long)));
	else if (format == 'o')
		return (ft_putoctal(va_arg(args, long)));
	else if (format == 'u')
		return (ft_putnbr(va_arg(args, unsigned long)));
	else if (format == 'r')
		return (ft_putstr('r', va_arg(args, char *)));
	return (-1);
}

/**
 * _printf - he work like printf
 * @format: style to print
 *
 * Return: lenght to printf
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int len;

	va_start(args, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && ft_strchr("csdibSpXxoiur%", format[i + 1]))
		{
			len += ft_format(args, format[i + 1]);
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
