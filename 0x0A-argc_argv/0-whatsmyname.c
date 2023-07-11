#include "main.h"

/**
 * main - function prints name of program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 (good to go)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
