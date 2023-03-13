#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiple of two numbers
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0 if true, 1 if not
 */

int main(int argc, char *argv[])
{
	int c, d;

	if (argc == 1)
	{
		c = atoi(argv[1]);
		d = atoi(argv[2]);
		printf("%d\n", c * d);
		return (0);
	}
	printf("Error\n");
	return (1);
}
