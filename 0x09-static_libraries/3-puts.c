#include "main.h"

/**
 * _puts - prints string to standardout
 * @str: string to be checked
 * _putchar prints new line
 */
void _puts(char *str)

{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
