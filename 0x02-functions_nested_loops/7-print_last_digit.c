#include "main.h"
/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */
int print_last_digit(int n)
{
int last;
if (n < 0)
n = -n;
last = n % 10;
_putchar(last + '0');
return (last);
}
