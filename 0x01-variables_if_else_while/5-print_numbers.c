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

	for (digits = '0'; digits <= '9'; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	return (0);
}
