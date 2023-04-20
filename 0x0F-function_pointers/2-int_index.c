#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: input
 * @size: input
 * @cmp: input
 * Return: if no element matches, return -1 if size <= 0, return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size > 0)
{
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
}
}
return (-1);
}
