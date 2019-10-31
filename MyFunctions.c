#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *CharacterCase - Print a character
 *@arg: Argument
 *Return: Int
 */
int CharacterCase(va_list arg)
{
	char c;
	
	c = va_arg(arg, int);
	_putchar(c);
	return (0);
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
	return (0);
}

/**
 *DecimalCase - Print integer
 *@arg: argument
 *Return: Int
 */
int DecimalCase(va_list arg)
{
	int x = va_arg(arg, int), BaseExp = 1, len = 0, num;

	if (x < 0)
	{
		len += _putchar('-');
		num = x * (-1);
	}
	else
	{num = x; }
	while (num / BaseExp > 9)
	{BaseExp *= 10; }
	while (BaseExp != 0)
	{
		len += _putchar(num / BaseExp + '0');
		num %= BaseExp;
		BaseExp /= 10;
	}
	return (0);
}

/**
 *IntegerCase - Print integer
 *@arg: argument
 *Return: Int
 */
int IntegerCase(va_list arg)
{
	int x = va_arg(arg, int), BaseExp = 1, len = 0, num;

	if (x < 0)
	{
		len += _putchar('-');
		num = x * (-1);
	}
	else
	{num = x; }
	while (num / BaseExp > 9)
	{BaseExp *= 10; }
	while (BaseExp != 0)
	{
		len += _putchar(num / BaseExp + '0');
		num %= BaseExp;
		BaseExp /= 10;
	}
	return (0);
}
