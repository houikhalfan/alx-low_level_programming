#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
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
if (separator != NULL)
printf("%s", saparator);
i++;
}
va_end(ap);
printf("\n");
}