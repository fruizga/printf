#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *_printf - output based on the format
 *@format: char
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i, j,unknownChar = 0, len = 0;

	print_type print[] = {
		{"c", CharacterCase},
		{"s", StringCase},
		{"d", DecimalCase},
		{"i", IntegerCase},
		{"o", OctCase},
		{"u", UnsignedCase},
		{"b", BinaryCase},
		{NULL, NULL}
	};
	va_start(arg, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (print[j].f != NULL)
			{
				if (format[i + 1] == print[j].print[0])
				{
				len = len + print[j].f(arg);
				unknownChar = 1;
				i++;
				}
				j++;
			}
			if (unknownChar == 0)
			{
				_putchar(format[i]);
				len += 1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
