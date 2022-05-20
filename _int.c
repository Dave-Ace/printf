#include "main.h"
/**
 * _int - function that prints integers
 * @n: number passed rom argument
 * Return: Number of digits
 */
int _int(int n)
{
int m = 10, n_digit = 0, count = 0;
int sum, j;
int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
if (n < 0)
{
n *= -1;
while (m < n)
{
m *= 10;
}
/* n *= -1;    */
_putchar('-');
count++;
}
else
{
while (m < n)
{
m *= 10;
}
}
m /= 10;
for (j = 0; m > 0; j++)
{
a[j] = (n / m) % 10;
m /= 10;
n_digit++;
}
for (j = 0; j < n_digit; j++)
{
_putchar('0' + a[j]);
}
return (count + n_digit);
}
