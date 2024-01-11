#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
unsigned int max_bi;
max_bi = (sizeof(unsigned long int) * 8);
if (index > max_bi)
return (-1);
bit = ((n >> index) & 1);
return (bit);
}
