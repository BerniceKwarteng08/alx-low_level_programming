#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory
 * @b: size to be allocted
 * Return: 0 (good to go)
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
