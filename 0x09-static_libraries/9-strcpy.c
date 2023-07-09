#include "main.h"
/**
 * *_strcpy - copies strings
 * @dest: destination
 * @src: value
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int g = 0;
	int d = 0;

	while (*(src + g) != '\0')
	{
		g++;
	}
	for (; d < g; d++)
	{
		dest[d] = src[d];
	}
	dest[g] = '\0';
	return (dest);
}
