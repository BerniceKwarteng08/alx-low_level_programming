#include "main.h"
#include <stdio.h>

/**
 * main - function prints name of program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0 (good to go)
 */

int main(int argc, char *argv[])

{
	(void) argc;
	printf("%s\n", *argv[0]);
	return (0);
}
