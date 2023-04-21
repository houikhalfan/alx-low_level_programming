#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: input
 */

void print_all(const char * const format, ...)
{
va_list ap;
char *s;
int i = 0;
va_start(ap, format);
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
}
if ((format[i] == 'c'
		|| format[i] == 'i'
		|| format[i] == 'f'
		|| format[i] == 's')
		&& format[(i + 1)] != '\0')
printf(", ");
i++;
}
printf("\n");
va_end(ap);
}
