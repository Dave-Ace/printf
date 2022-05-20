#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * _printf - Functions that prints based on each arg specifier
 * @format: First parameter
 * Return: 0
 */
int _printf(const char *format, ...)
{
int i = 0;
int count;
char *str = NULL;
va_list args;
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
/* Char Specifier */
if (format[i] == 'c')
{
_putchar(va_arg(args, int));
count++;
}
else if (format[i] == 's')
{
/* String specifier */
str = va_arg(args, char *);
/* functiton that handles string specifier */
count += s_specifier(str);
}
else if (format[i] == '%')
{
/* Percentage specifier */
_putchar('%');
count++;
}
else if (format[i] == 'i')
{
count += _int(va_arg(args, int));
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
