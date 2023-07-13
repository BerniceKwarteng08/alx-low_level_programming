#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string to be checked
 * @s2: string to be checked
 * @n: int to be checked
 * Return: 0 (good to go)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int f = 0, g = 0, k = 0, l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[f])
		f++;
	while (s2[k])
		k++;
	if (n >= k)
		l = f + k;
	else
		l = f + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (g < l)
	{
		if (g <= f)
			str[g] = s1[g];
		if (g >= f)
		{
			str[g] = s2[k];
			k++;
		}
		g++;
	}
	str[g] = '\0';
	return (str);
}
