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
while (i < n)
{
printf("%d", va_arg(ap, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
i++;
}
printf("\n");
va_end(ap);
}
