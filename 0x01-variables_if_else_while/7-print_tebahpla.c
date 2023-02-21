#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - prints alphabets backwards
 *
 * Return: 0(Sucessful)
 */

int main(void)
{
	int alph;

	for (alph = 'z'; alph >= 'a'; alph--)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
