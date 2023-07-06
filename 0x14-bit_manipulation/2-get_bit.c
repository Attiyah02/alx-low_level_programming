#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: the bit
 * @index: ind to get value at (starts from 0)
 *
 * Return: Error(-1) else value of bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
