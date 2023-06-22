#include "main.h"

/**
 * print_alphabet - print lower case alphabet
 * Return: 0 (good t0 go)
 */

void print_alphabet(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
