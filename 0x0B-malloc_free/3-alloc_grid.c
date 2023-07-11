#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to two dimensional arrays
 * @width: grid width
 * @height: grid height
 * Return: width or height is 0 or negative, NULL (otherwise)
 */

int **alloc_grid(int width, int height)
{
	int i, j, m, n;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if  (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			a[m][n] = 0;
		}
	}
	return (a);
}
