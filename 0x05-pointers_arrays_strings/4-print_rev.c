#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: first input
 */

void print_rev(char *s)
{
int i, j;
while (s[j] != '\0')
{
j++;
}
for (i = (j - 1); i <= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
