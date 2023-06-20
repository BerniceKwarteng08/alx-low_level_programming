#include <stdio.h>
/**
 * main - numbers in lower case
 * Return: 0 (good to go)
 */

int main(void)
{
	char y;

	int z;

	y = 'a';
	z = 0;
	while
		(z < 10)
		{
			putchar(z + '0');
			z++;
		}
	while
		(y <= 'f')
		{
			putchar(y);
			y++;
		}
	putchar('\n');
	return (0);
}

