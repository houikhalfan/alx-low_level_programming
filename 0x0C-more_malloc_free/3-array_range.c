#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: input
 * @max: input
 * Return:pointer to an allocated array
 */
int *array_range(int min, int max)
{
int *p;
int i, j;
i = 0;
if (min > max)
return (NULL);
p = malloc((max - min + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (j = min; j <= max; j++)
{
p[i] = j;
i++;
}
return (p);
}
