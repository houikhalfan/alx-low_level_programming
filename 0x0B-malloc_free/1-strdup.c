#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a string
 * @str: input
 * Return: a pointer
 */
char *_strdup(char *str)
{
int leng = 0;
int i = 0;
char *t;
if (str == NULL)
return (NULL);
while (*(str + i))
{
leng++;
i++;
}
t = malloc((leng + 1) * sizeof(char));
if (t == NULL)
return (NULL);
i = 0;
leng++;
while (i < leng)
{
t[i] = str[i];
i++;
}
return (t);
}
