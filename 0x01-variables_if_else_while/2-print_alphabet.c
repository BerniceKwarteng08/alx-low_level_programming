#include <stdio.h>
/**
 * main - printing of alphabet in lower cases
 * Return: 0 (good to go)
 */

int main(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
