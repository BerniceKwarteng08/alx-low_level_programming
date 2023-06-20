#include <stdio.h>
#include <stdlib.h>
/**
 * main - combinations of two-digits
 * Return: 0 (good to go)
 */
int main(void)
{
	int a, g;

	for (a = 0; a <100; a++)
	{
		for (g = 0; g <100; g++)
		{
			if (a < g)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((g / 10) + 48);
				putchar((g % 10) + 48);
				if (a != 98 || g != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
