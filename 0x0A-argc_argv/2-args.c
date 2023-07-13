#include "main.h"
#include <stdio.h>

/**
 * main - print all arguments
 * @argc: argument count
 * @argv: arguement vector
 * Return: 0 (good)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
