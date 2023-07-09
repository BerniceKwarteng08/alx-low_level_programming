#include "main.h"

/**
 * _memset - program that fills a block of memory with special values
 * @s: address to memory
 * @b: desired value
 * @n: bytes to be changed
 * Return: 0 (good to go)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int y = 0;

	for (; n > 0; y++)
	{
		s[y] = b;
		n--;
	}
	return (s);
}
