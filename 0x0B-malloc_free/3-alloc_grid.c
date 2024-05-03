#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid -  a function that returns a pointer to a 2 dimensional array
 *@width: input
 *@height: input
 *Return: pointer
*/
int **alloc_grid(int width, int height)
{
int **g;
int i, n;
if (width <= 0 || height <= 0)
return (NULL);
g = malloc(sizeof(int *) * height);
if (g == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
g[i] = malloc(width * sizeof(int));
if (g[i] == NULL)
{
for (i = 0; i < height; i++)
free(g[i]);
free(g);
return (NULL);
}
for (n = 0; n < height; n++)
g[i][n] = 0;
}
return (g);
}
