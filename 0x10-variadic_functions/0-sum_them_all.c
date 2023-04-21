#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of inputs
 * @n: input
 * Return: sum or 0 if n == 0
 */


int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list ap;
va_start(ap, n);
int i, s = 0;
for (i = 0; i < n; i++)
s += va_arg(ap, int);
va_end(ap);
return (s);
}
