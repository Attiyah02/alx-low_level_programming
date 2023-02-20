#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers of base ten
 *
 * Return: 0(Succesful)
 */

int main(void)
{
	int digits;

	for (digits = 0; digits < 10; digits++)
	{
		printf("%d", digits);
	}
	printf("/n");
	return (0);
}
