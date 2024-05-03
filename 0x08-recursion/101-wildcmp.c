#include "main.h"

/**
 * wildcmp -  a function that compares two strings
 * @s1: input
 * @s2: input
 * Return: 1 if s1 and s2 are identicals, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
char v1, v2;
if (*s1 == '\0' && *s2 == '\0')
return (1);
v1 = *s1;
v2 = *s2;
if (v1 != v2)
return (0);
return (wildcmp(s1 + 1, s2 + 1));
}
