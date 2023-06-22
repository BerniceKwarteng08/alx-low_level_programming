#include "main.h"

/**
 * _islower - Check for lowercase character
 * @c: charater to be checked
 * Return: 1 (c is lowercase) or 0 for anyother thing
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
