#include <stdio.h>
/**
 * main - print lower case without e and q
 * Return: 0 (good to go)
 */

int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z')
	{
		if ((b != 'q' && b != 'e') && b <= 'z')
			putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
