#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0(Successful)
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
