#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: first value stored, 0 if big endian, 1 if little
 */

int get_endianness(void)
{
int n = 0x00000001;
char *c = (char *)&n;
return (c[0]);
}
