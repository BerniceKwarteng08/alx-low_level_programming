#include "main.h"

/**
 * _memset - function that fill a block with constant value
 * @s: beginnig of address memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed arrays
 */

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
