#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers + \n
 * @separator: input
 * @n: input
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ap;
va_start(ap, n);
if (n > 0)
{
while (i < n)
{
printf("%d", va_arg(ap, int));
if (separator != NULL)
printf("%s", separator);
i++;
}
va_end(ap);
}
printf("\n");
}
