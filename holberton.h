#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *struct print - structure for conversion
 *@print: print
 *@f: pointer to function
 *return: int
 */
typedef struct print
{
	char *print;
	int (*f)();
} print_type;

int _printf(const char *format, ...);
int print_op(const char *format, print_type *print_arr, va_list arg);
int _putchar(char c);

int CharacterCase(va_list arg);
int StringCase(va_list arg);
int DecimalCase(va_list arg);
int IntegerCase(va_list arg);

int OctCase(va_list arg);
int UnsignedCase(va_list arg);
int binaryNum(va_list arg);
int rooot13(va_list arg);
int _hex_str(unsigned int n, unsigned int hex, char alpha);
int _hex_l(va_list arg);
int _hex_u(va_list arg);

#endif
