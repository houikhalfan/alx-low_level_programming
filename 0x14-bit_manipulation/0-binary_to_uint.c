#include "main.h"

/**
 * binary_to_uint - a function that converts a
 * binary number to an unsigned int.
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
int l = 0, base_2;
if (!b)
return (0);
for (; b[l] != '\0'; l++)
;
for (l--, base_2 = 1; l >= 0; l--, base_2 *= 2)
{
if (b[l] != '0' && b[l] != '1')
return (0);
if (b[l] & 1)
i += base_2;
}
return (i);
}
