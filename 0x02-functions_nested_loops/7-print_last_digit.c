#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @q: the int to take the last digit from
 * Return: last digit's value
 */

int print_last_digit(int q)
{
	int b;

	b = q % 10;
	if (b < 0)
	{
		b = b * -1;
	}
	_putchar(b + '0');
	return (b);
}
