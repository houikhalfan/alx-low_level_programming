#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers
 * @a: first input
 * @b: second input
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *c;
}
