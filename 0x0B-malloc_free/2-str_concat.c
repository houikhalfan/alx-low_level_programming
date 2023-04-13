#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a funct that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concat of two strings
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int l1 = 0, l2 = 0, i = 0, l;
while (*(s1 + i))
{
l1++;
i++;
}
i = 0;
while (*(s2 + i))
{
l2++;
i++;
}
l2++;
l = l1 + l2;
s = malloc(sizeof(char) * l);
if (s == NULL)
return (NULL);
i = 0;
while (i < l1)
{
s[i] = s1[i];
i++;
}
i = 0;
while (i < l2)
{
s[l1] = s2[i];
l1++;
i++;
}
return (s);
}
