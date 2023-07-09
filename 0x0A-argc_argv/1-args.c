#include "main.h"

/**
 * main - function that prints number of argument passed to program
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (good to go)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}
