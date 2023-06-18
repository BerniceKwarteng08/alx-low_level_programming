#include <stdio.h>
/**
 * main - Program that prints the size of various computer types
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int b;
	long long int e;
	float f;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
