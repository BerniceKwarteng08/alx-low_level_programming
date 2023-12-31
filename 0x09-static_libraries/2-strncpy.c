#include "main.h"

/**
 * _strncpy - program that copies a string
 * @dest: value
 * @scr: value
 * @n: value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n && src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	while (l < n)
	{
		dest[l] = '\0';
		l++;
	}
	return (dest);
}
