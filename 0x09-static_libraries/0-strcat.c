#include "main.h"

/**
 * _strcat - function concatenate two string values
 * @dest: input value
 * @src: input value
 * Return: always
 */

char *_strcat(char *dest, char *src)
{
	int k = 0;
	int j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (src[j] != '\0')
	{
		dest[k] = src[j];
		k++;
		j++;
	}
	dest[k] = '\0';
	return (dest);
}
