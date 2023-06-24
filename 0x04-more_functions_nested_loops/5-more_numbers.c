#include "main.h"

/**
 * more_numbers - print 10 times the number from 0 to 14
 * Return: 0 (good)
 */

void more_numbers(void)

{
	int b, c;

	for (b = 0; b < 10; b++)
	{
		for (c = 0; c <= 14, c++)
		{
			if (c < 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}
