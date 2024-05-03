#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
if (size <= 0)
return (NULL);
arr = malloc(size * sizeof(char));
if (arr == NULL)
return (NULL);
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
