#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number
 * @m: number2
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int di;
unsigned int d = 0;
di = n ^ m;
do {
d += (di & 1);
di >>= 1;
} while
(di > 0);
return (d);
}
