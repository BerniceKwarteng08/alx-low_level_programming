#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two args
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 (good to go)
 */

int main(int argc, char *argv[])
{
	int s1 = 0, s2 = 0;

	if (argc == 3)
	{
		s1 = atoi(argv[1]);
		s2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
