#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: input
 * @n: input
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *ar;
va_start(ap, n);
for (i = 0; i < n; i++)
{
ar = va_arg(ap, char *);
if (ar  == NULL)
printf("(nil)");
else
printf("%s", ar);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}

