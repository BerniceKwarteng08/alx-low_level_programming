#include <stdio.h>

/**
 * swap_int - function that swaps the value of two integers
 * @a: first integer to be swapped
 * @: second integer to be swapped
 * Return: empty
 */

void swap_int(int *a, int *b)
	/* function that swaps the value of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
