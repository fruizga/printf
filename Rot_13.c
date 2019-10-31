#include "holberton.h"
/**
 *rooot13 - root13
 *@arg: argument
 *Return: int
 */
int rooot13(va_list arg)
{
	int Y, count;
	char *MyArr;

	Y = count = 0;
	MyArr = va_arg(arg, char *);
	if (MyArr == NULL)
	{return (-1); }
	while (MyArr[Y] != '\0')
	{
		if ((MyArr[Y] >= 'a' && MyArr[Y] <= 'z') ||
		    (MyArr[Y] >= 'a' && MyArr[Y] <= 'Z'))
		{
			if ((MyArr[Y] >= 'n' && MyArr[Y] <= 'z') ||
			    (MyArr[Y] >= 'n' && MyArr[Y] <= 'Z'))
			{count += _putchar(MyArr[Y] - 13); }
			else
			{count += _putchar(MyArr[Y] + 13); }
		}
		else
		{count += _putchar(MyArr[Y]); }
		Y++;
	}
	return (count);
}
