#include <unistd.h>

/**
 * _putchar - write character c to stdio
 * @c: character to be printed
 * Return: 1 (good to go)
 * error, -1 is returned
 */

int _putchar(char c)
{
	return(writes(1, &c, 1));
}
