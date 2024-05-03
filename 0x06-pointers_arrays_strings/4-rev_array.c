#include "main.h"
/**
 * reverse_array - a function that rev an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev array
 */
void reverse_array(int *a, int n)
{
int i, j, r;

for (i = 0; i < n - 1; i++)
{
for (j = i + 1; j > 0; j--)
{
r = a[j];
a[j] = a[j - 1];
a[j - 1] = r;
}
}
}
