#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: first input
 */

void print_rev(char *s)
{
int i, k, l;
i = 0;
while (s[i] != '\0')
{
i++;
}
l = i - 1;
for (k = l; k >= 0; k--)
{
_putchar(s[k]);
}
_putchar('\n');
}
