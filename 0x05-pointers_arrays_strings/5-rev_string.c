#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: string input
 * Return: reverse string
 */
void rev_string(char *s)
{
	int l = 0;
	int i;
	char r = s[0];

	while (s[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
	{
		l--;
		r = s[i];
		s[i] = s[l];
		s[l] = r;
	}
}
