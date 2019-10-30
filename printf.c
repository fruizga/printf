#include "holberton.h"
/**
 *print_op - Check the specifier to print
 *@format: string passed
 *@print_arr: array
 *@list: list of arguments to print
 *Return: number
 */
int print_op(const char *format, print_type *print_arr, va_list arg)
{
	char a;
	int count = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_arr[c].print != NULL &&
			       a != *(print_arr[c].print))
			{c++; }
			if (print_arr[c].print != NULL)
			{count = count + print_arr[c].f(arg); }
			else
			{
				if (a == '\0')
				{return (-1); }
				if (a != '%')
				{count += _putchar('%'); }
				count += _putchar(a);
			}
		}
		else
		{count += _putchar(a); }
		b++;
		a = format[b];
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
		{"d", IntegerCase},
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
