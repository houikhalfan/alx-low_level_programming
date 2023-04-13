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
len++;
i++;
}
t = malloc(leng * sizeof(char));
if (t == NULL)
return (NULL);
i = 0;
while (i < (leng + 1))
{
str[i] = t[i];
i++;
}
return (t);
}
