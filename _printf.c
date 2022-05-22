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
if (format == NULL)
return (-1);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
/* Char Specifier */
if (format[i] == 'c' && va_arg(args, int) != 0)
{
_putchar(va_arg(args, int));
count++;
}
else if (format[i] == 's' && va_arg(args, char *) != NULL)
{
/* String specifier */
str = va_arg(args, char *);
count += s_specifier(str);
}
else if (format[i] == '%')
{
/* Percentage specifier */
_putchar('%');
count++;
}
else if (format[i] == 'i' && va_arg(args, int) != 0)
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
