#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 *CharacterCase - Print a character
 *@arg: Argument
 *Return: Int
 */
int CharacterCase(va_list arg)
{
	char c;
	int i = 1;
	c = va_arg(arg, int);
	_putchar(c);
	return (i);
}

/**
 *StringCase - Print String
 *@arg: argument
 *Return: Int
 */
int StringCase(va_list arg)
{
	unsigned int i;
	char *s;

	s = va_arg(arg, char *);
	i = 0;
	if (s == NULL)
	{s = "(null)"; }
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 *DecimalCase - Print Decimal
 *@arg: argument
 *Return: Int
 */
int DecimalCase(va_list arg)
{
	int num, digit, n = va_arg(arg, int);
	int j = 1, i = 1, last = n % 10;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = - num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			j *= 10;
			num /= 10;
		}
		num = n;
		while (j > 0)
		{
			digit = num / j;
			_putchar(digit + '0');
			num = num - (digit * j);
			j /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
/**IntegerCase - Print integer
 *@arg: argument
 *Return: Int
 */
int IntegerCase(va_list arg)
{
	int num, digit, n = va_arg(arg, int);
	int j = 1, i = 1, last = n % 10;

	n = n / 10;
	num = n;
	if (last < 0)
	{
		_putchar('-');
		num = - num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			j *= 10;
			num /= 10;
		}
		num = n;
		while (j > 0)
		{
			digit = num / j;
			_putchar(digit + '0');
			num = num - (digit * j);
			j /= 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
