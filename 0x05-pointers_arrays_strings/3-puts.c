#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: first input
 */
void _puts(char *str)
{
int i:
while (str[i] != '\0')
{
_putchar(str[i]);
}
_putchar('\n');
}
