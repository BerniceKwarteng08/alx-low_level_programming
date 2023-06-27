#include <stdio.h>

/**
 * _strlen -function that returns length of a string
 * @stir: string to get length from
 * Return: empty
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
