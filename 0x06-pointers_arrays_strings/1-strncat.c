#include "main.h"

/**
* *_strncat - a function that a function that concatenates two strings.
* @dest: first input
* @src: second input
* @n: third input
* Return: concatenting of two strings
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0, j=0;

while (dest[i] != '\0')
i++;
while (j < n && src[j] != '\0')
{
dest[i] = dest[i] + src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
