#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints numbers of single base
 *
 * Return: 0(Sucessful)
 */

int main(void)
{
	int end_at_nine;

	for (end_at_nine = '0'; end_at_nine <= '9'; end_at_nine++)
	{
		putchar(end_at_nine);
	}
	putchar('\n');
	return (0);
}
