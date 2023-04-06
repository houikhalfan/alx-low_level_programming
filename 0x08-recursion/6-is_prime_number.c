#include "main.h"

int test(int n, int k);
/**
 * is_prime_number - if n is a prime number
 * @n: input
 * Return: 1 if is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n < 0)
return (0);
return (test(n, 2));
}
/**
 * test - if n is a prime number
 * @n: input
 * @k: input
 * Return: 1 if is a prime number, 0 if not
 */
int test(int n, int k)
{
if (k == n)
return (1);
if (n % K == 0)
return (0);
return (test(n, k + 1));
}
