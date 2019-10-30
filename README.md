# Printf Program Manual

1149@holbertonschool.com to correct errors

## **NAME**

_printf - function made by Holberton way

## **SYNOPSIS**

        _printf(constchar*format,...)

       #include <stdarg.h>

       int _printf(const char *format, ...);

       int _putchar(char c);

       int CharacterCase(va_list arg);

       int StringCase(va_list arg);

       int DecimalCase(va_list arg);

       int IntegerCase(va_list arg);

       int OctCase(va_list arg);

       int UnsignedCase(va_list arg);

       int BinaryCase(va_list arg);
       _

       _____________________________________________

 ## **DESCRIPTION**

printf function produces output according to a format as described below.

### Format

The  function  takes parameters to generate the output, first character case that invoques the function to define the process to do, in this case represents
       the data type to print in console; the next is one or more parameters, they are variable names. Then, call the corresponding function for each  case  (char,
       string, integer, float, double, hex)

### Format specifiers

**c**      prints a single character.

**s**      prints a string teating it like a array of characters.

**d**      prints a decimal number an also a big integer.

**i**      prints an integer number.

**o**      converts a number in octal and then print it.

**u**      prints the unsigned case.

**b**      converts a number in a binary and then print it.

## SEE ALSO

printf(3) printf

## BUGS

All you can imagine maybe a bug.

## AUTHOR

Jose Díaz and Faber Andres Ruiz (1149@holbertonschool.com - 1096@holbertonschool.com)

28 October 2019 
