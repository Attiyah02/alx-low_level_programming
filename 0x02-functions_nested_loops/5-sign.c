#include "main.h"

/**
 * print_sign - prints sign of number
 * @t: the int being checked
 * Return: 1 and it prints + if t is more than zero
 * 0 and prints 0 if t is zero
 * -1 and prints - if t is less than zero
 */

int print_sign(int t)
{
	if (t > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (t == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
