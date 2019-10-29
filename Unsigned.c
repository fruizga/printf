#include "holberton.h"
#include <stdlib.h>
/**
 *UnsignedCase - Prints unsigned int argument
 *@arg:argument
 *Return: int
 */
int UnsignedCase(va_list arg)
{
	int DigitExp = 1, len = 0;
	unsigned int num;

	num = va_arg(arg, unsigned int);
	do {
		DigitExp *= 10;
	} while ((num / DigitExp) > 9);
	do {
		len += _putchar((num / DigitExp) + '0');
		num %= DigitExp;
		DigitExp /= 10;
	} while (DigitExp != 0);
	return (len);
}

