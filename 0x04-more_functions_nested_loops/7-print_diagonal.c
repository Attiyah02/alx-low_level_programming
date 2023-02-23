#include "main.h"

/**
 * print_diagonal - draw diagonal lines
 * @d: number of times diagonal line is printed
 * Return: empty
 */

void print_diagonal(int d)

{
	int a, b;

	if (d <= 0)
	{
		_putchar('\n');
	}
		else
		{
			for (a = 0; a < d; a++)
			{
				for (b = 0; b < a; b++)
				{
					_putchar(32);
				}
				_putchar(92);
				_putchar('\n');
			}
		}
}
