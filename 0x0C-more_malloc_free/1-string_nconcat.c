#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int l1 = 0, l2 = 0, i = 0, j = 0;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (*(s1 + i))
{
i++;
l1++;
}
i = 0;
while (*(s2 + i))
{
i++;
l2++;
}
if (n > l2)
n = l2;
i = 0;
while (i < l1)
{
p[i] = s1[i];
i++;
}
while (j < n)
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
}
