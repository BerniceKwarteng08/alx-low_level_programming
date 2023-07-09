#include "main.h"
/**
 * _isalpha - program checks for alphabets
 * @c: char to be checked
 * Return: 1 for letter, 0 for others
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
