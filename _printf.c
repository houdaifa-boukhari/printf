#include "main.h"
/**
 * _printf: man printf
 * @format: format specifier
 * @...: the other arguments
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int len, i;
	va_list args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			len += ft_putchar(va_arg(args, int));
			i++;
		}
		
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			len += ft_putstr(va_arg(args, char *));
			i++;
		}

		else if (format[i] == '%' && format[i + 1] == '%')
		{
			len += ft_putchar('%');
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			len += ft_putnbr(va_arg(args,int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'b')
		{
			len += ft_binary(va_arg(args, int));
			i++;
		}	
		else if (format[i] == '%' && format[i + 1] == 'u')
		{
			len += ft_unsigned(va_arg(args, unsigned int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'o')
		{
			len += ft_octal(va_arg(args, long));
			i++;
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	return (len);
}
