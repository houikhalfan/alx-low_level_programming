#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements of the array to be printed
 * Return: array and n inputs
 */
void print_array(int *a, int n)
{
int i = 0;

while (i < (n - 1))
{
printf("%d, ", a[i]);
i++;
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
