#include <stdio.h>
/**
 * main - possible combination of single digit
 * Return: 0 (good to go)
 */

int main(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		putchar(k + '0');
		if (k < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
