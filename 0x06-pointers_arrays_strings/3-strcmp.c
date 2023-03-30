#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @s1: destination input
 * @s2: second input
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
int i, r;
i = 0;
while (s1[i] != '\0' || s2[i] != '\0')
{
if (s1[i] != s2[i])
{
r = s1[i] - s2[i];
return (r);
}
i++;
}
return (0);
}
