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

