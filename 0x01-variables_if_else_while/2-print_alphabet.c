#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 *
 * Return: 0(Succesful)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);

		alph++;
	}
	putchar('\n');
	return (0);
}
