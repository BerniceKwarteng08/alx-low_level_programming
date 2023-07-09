#include "main.h"

/**
 * main - print the name of program
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 (good to go)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
