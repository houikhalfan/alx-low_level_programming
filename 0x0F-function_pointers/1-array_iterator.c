#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a fct that executes a function
 * @array: input
 * @size: input
 * @action: input
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL)
return;
for (i = 0; i < size; i++)
action(*(array + 1));
}
