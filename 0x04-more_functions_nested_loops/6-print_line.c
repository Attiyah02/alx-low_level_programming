#include "main.h"

/**
 * print_line - draws straight line
 * @l: number of lines to draw
 * Return: empty
 */

void print_line(int l)
{
	int m;

	if (l <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < l; m++)
		{
			_putchar(95);
		}
	_putchar('\n');
	}
}
