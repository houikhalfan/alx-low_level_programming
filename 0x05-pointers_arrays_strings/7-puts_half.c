#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 */
void puts_half(char *str)
{
int s, n, len;

len = 0;
s = 0;

while (str[s] != '\0')
{
len++;
s++;
}

n = (len / 2);

if ((len % 2) == 1)
n = n + 1;
s = n;
while (str[s] != '\0')
{
_putchar(str[s]);
s++;
}
_putchar('\n');
}
