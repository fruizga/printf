#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *OctCase - Prints Octal number
 *@arg: argument
 *Return: int
 */
int OctCase(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int), Aux = n;
	int cnt = 0, i, *MyArr;

	while (n / 8 != 0)
	{
		n = n / 8;
		cnt++;
	}
	cnt++;
	MyArr = malloc(cnt * sizeof(int));
	if (MyArr == NULL)
	{
		free(MyArr);
		return (0);
	}
	for (i = 0; i < cnt; i++)
	{
		MyArr[i] = Aux % 8;
		Aux = Aux / 8;
	}
	for (i = cnt - 1; i >= 0; i--)
	{
		_putchar(MyArr[i] + '0');
	}
	free(MyArr);
	return (cnt);
}
