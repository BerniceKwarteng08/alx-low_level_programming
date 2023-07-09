#include "main.h"

/**
 * _isupper - test for uppercase letters
 * @c: caharacter to be tested
 * Return: 1 (uppercase), 0 (if otherwise)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
