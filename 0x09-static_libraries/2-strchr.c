#include "main.h"

/**
 * _strchr - entry point
 * @s: value
 * @c: value
 * Return: 0 (good to go)
 */

char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
