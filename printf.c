#include "holberton.h"
/**
 *print_op - Check the specifier to print
 *@format: string passed
 *@print_arr: array
 *@arg: list of arguments to print
 *Return: number
 */
int print_op(const char *format, print_type *print_arr, va_list arg)
{
	int count = 0, i = 0, j = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			i++;
			while (print_arr[j].print != NULL &&
			       format[i] != *(print_arr[j].print))
			{j++; }
			if (print_arr[j].print != NULL)
			{count = count + print_arr[j].f(arg); }
			else
			{
				if (format[i] == '\0')
				{return (-1); }
				if (format[i] != '%')
				{count += _putchar('%'); }
				count += _putchar(format[i]);
			}
		}
		else
		{count += _putchar(format[i]); }
		i++;
	}
	return (count);
}

/**
 *_printf - Prints output according to format
 *@format: string being passed
 *Return: char
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int a = 0;

	print_type ops[] = {
		{"c", CharacterCase},
		{"s", StringCase},
		{"d", DecimalCase},
		{"i", IntegerCase},
		{"u", UnsignedCase},
		{"o", OctCase},
		{NULL, NULL}
	};

	if (format == NULL)
	{return (-1); }
	va_start(arg, format);
	a = print_op(format, ops, arg);
	va_end(arg);
	return (a);
}
