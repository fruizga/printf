#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
/**
 *struct print - structure for conversion
 *
 *
 *
 */
typedef struct print
{
	char *print;
	int (*f)();
} print_type;

int _printf(const char *format, ...);
int _putchar(char c);

int CharacterCase(va_list arg);
int StringCase(va_list arg);
int DecimalCase(va_list arg);
int IntegerCase(va_list arg);

#endif
