#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: 0 (good to go)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int r;

	while (*s)
	{
	for (r = 0; accept[r]; r++)
	{
		if (*s == accept[r])
		{
			i++;
			break;
		}
		else if (accept[r + 1] == '\0')
			return (i);
	}
	s++;
	}
	return (n);
}
