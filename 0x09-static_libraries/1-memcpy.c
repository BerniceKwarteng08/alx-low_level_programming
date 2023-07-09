#include "main.h"

/**
 * _memcpy - copies mem area
 * @dest: memory's destination
 * @src: memory is copied
 * @n: input value
 * Return: empty
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int z = n;

	for (; x < z; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
