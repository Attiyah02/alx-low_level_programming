#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints alphabet in lowercase and uppercase
 *
 * Return: 0(Succesful)
 */

int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
