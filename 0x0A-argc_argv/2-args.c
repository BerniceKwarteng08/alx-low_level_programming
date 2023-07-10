#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: arguement vector
 * Return: 0 (good)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argc[i]);
	}
	return (0);
}
