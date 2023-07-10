#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (good to go)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
