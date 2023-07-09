#include "main.h"

/**
 * main - functionthat prints number of argument passed to program
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (good to go)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argc*/
	printf("%d\n", argc - 1);

	return (0);
}
