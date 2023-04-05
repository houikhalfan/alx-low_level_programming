#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: input char
 */
void _puts_recursion(char *s)
{
int n = 0;
while (s[n] != '\0')
{
_putchar(s[n]);
n++;
}
_putchar('\n');
}
