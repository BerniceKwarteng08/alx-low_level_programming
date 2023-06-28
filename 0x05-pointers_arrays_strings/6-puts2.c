#include "main.h"

/**
 * puts2 - function that prints evry other string
 * @str: string to be printed
 * Return: empty
 */

void puts2(char *str)
{
	int i;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	for (i = 0; i < k; i +=2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
