#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: input
 * @c: input
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
unsigned int i = 0;
char *arr;
arr = malloc((size + 1) * sizeof(char));
if (size == 0)
return (NULL);
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
