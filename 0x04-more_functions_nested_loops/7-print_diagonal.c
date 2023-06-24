#include "main.h"

/**
 * print_diagonal - function that print diagonal
 * @n: the number of time the character should be printed
 * Return: 0 (good)
 */

void print_diagonal(int n)
{
	int x, y;
	if (n >= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
