#include "main.h"
/**
 * s_specifier - a function that handles the %s format
 * and allows string to be printed.
 * @str: string to be printed
 * Return: n
 */

int s_specifier(char *str)
{
	int j;
	int n = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++
		n += 1;
	}
	return (n);
}
