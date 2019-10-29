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
	do {DigitExp *= 10; }
	while ((num / DigitExp) > 9);
	do
	{
		len += _putchar((num / DigitExp) + '0');
		num %= DigitExp;
		DigitExp /= 10;
	}
	while (DigitExp != 0);
	return (len);
}
/**
 *UnsignedCase - Prints unsigned int argument
 *@arg:argument
 *Return: int
 */
int BinaryCase(va_list arg)
{
	int *MyArr, i, cnt = 0;
	unsigned int x = va_arg(arg, unsigned int), substitute = x;

	do
	{
		x = x / 2;
		cnt++;
	}
	while (x / 2 != 0);
	cnt++;
	MyArr = malloc(cnt * sizeof(int));
	if (MyArr == NULL)
	{
		free(MyArr);
		return (0);
	}
	i = 0;
	while (i < cnt)
	{
		MyArr[i] = substitute % 2;
		substitute = substitute / 2;
		i++;
	}
	i = cnt - 1;
	while (i >= 0)
	{_putchar(MyArr[i] + '0'); }
	free(MyArr);
	return (cnt);
}
