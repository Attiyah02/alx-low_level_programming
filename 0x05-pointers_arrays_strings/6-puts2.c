#include "main.h"

/**
 * puts2 - prints one character out of two
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
