#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *_hex_str - print an hexadecimal munber
 *@alpha: argument
 *@n: n
 *@hex: hexadecimal
 *Return: hexadecimal
 */
int _hex_str(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int a = n % hex;
	unsigned int b = n / hex;
	char c;

	if (a > 10)
		c = (a - 10) + alpha;
	else
		c = a + '0';
	if (b == 0)
	{
		return (_putchar(c));
	}
	if (b < hex)
	{
		if (b > 10)
			return (_putchar(b - 10 + alpha) + _putchar(c));
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, hex, alpha) + _putchar(c));
}
/**
*_hex_l - prints hexa in lowercase
*@hexa: argument
*Return: hexadecimal in lower case
*/
int _hex_l(va_list hexa)
{
return (_hex_str(va_arg(hexa, unsigned int), 16, 'a'));
}
/**
*_hex_u - prints hexadecimal in uppercase
*@hexa: argument
*Return: hexadecimal in uppercase
*/
int _hex_u(va_list hexa)
{
	return (_hex_str(va_arg(hexa, unsigned int), 16, 'A'));
}
