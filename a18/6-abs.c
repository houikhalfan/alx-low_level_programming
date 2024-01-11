#include "main.h"

/**
 * _abs - absolute value
 * @n: number to check
 * Return: absolute value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
