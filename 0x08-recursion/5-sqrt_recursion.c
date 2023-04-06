#include "main.h"

int _sqr(int n, int s);
/**
 * _sqrt_recursion - return the square of number
 * @n: input
 * Return: square
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqr(n, 0));
}
/**
 * _sqr - test
 * @n: input
 * @s: input
 * Return: square
 */
int _sqr(int n, int s)
{
if (s * s > n)
return (-1);
if (s * s == n)
return (s);
return (_sqr(n, s + 1));
}
