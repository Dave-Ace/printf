#ifndef WRITE
#define WRITE
#include <unistd.h>
/**
 * _putchar - function that writes a character of unsigned char type,
 * to stdout.
 * @x: character to be printed
 * Return: on success 1,
 * on error, -1 and errno is set appropriately.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
#endif
