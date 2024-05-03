#include "main.h"
/**
 * *_strcat - a function that concatenates two strings
 * @dest: first input
 * @src: second input
 * Return: concatenates of the two strings
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = 0, j = 0;

while (dest[i] != '\0')
i++;
while (src[j] != '\0')
{
dest[i] = dest[i] + src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}

