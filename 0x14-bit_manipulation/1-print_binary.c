#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number being printed
 */

void print_binary(unsigned long int n)
{
	if (n > 10)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
