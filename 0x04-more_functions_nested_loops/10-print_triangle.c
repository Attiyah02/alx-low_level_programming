#include "main.h"

/**
 * print_triangle - prints a triangle of squares
 * @sizesq: size of the squares triangle
 * Return: empty
 */

void print_triangle(int sizesq)

{
	int a, b, c;

	if (sizesq <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < sizesq; a++)
		{
			for (b = sizesq - a; b > 1; b--)
			{
				_putchar(32);
			}
			for (c = 0; c <= a; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

