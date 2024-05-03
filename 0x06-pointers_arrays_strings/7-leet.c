#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @a: input value
 * Return: a
 */
char *leet(char *a)
{
int i, j;
char s1[] = "aeotlAEOTL";
char s2[] = "4307143071";

i = 0;
while (a[i] != '\0')
{
for (j = 0; j < 10; j++)
{
if (a[i] == s1[j])
{
a[i] = s2[j];
}
}
i++;
}
return (a);
}
