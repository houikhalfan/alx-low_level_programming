#include "main.h"


/**
 * _sqrt_recursion - return the square of number
 * @n: input
 * Return: square
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqr(n, 0));
}
/**
 * sqr - test
 * @n: input
 * @s: input
 * Return: square
 */
int sqr(int n, int s)
{
if (s * s > 0)
return (-1);
if (s * s == n)
return (s);
return (sqr(n, s + 1));
}
