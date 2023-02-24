#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @p: the integer to print
 * Return: empty
 */

void print_number(int p)

{
	unsigned int k = p;

	if (p < 0)
	{
		p *= -1;
		k = p;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) p % 10 + '0');
}
