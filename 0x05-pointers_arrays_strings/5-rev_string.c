#include "main.h"

/**
 * rev_string - a function thatrev string
 * @s: first input
 */

void rev_string(char *s)
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
