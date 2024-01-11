#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
unsigned long int m = n, t = 1;
int l = 0;
while (m > 0)
{
l++;
m >>= 1;
}
l -= 1;
if (l > 0)
t = t << l;
while (t > 0)
{
if (n & t)
_putchar('1');
else
_putchar('0');
t >>= 1;
}
}
