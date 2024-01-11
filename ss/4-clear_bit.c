#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mx, m = 1;
mx = (sizeof(unsigned long int) * 8);
if (index > mx)
return (-1);
m = ~(m << index);
*n = (*n & m);
return (1);
}
