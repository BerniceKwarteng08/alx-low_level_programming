#include "main.h"
#include <stdio.h>

/**
 * print_array - function that print n element of an array
 * @a: array of integers
 * @n: element to be printed
 * Return: 0 (good to go)
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		printf("%d", a[g]);
		if (g != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
