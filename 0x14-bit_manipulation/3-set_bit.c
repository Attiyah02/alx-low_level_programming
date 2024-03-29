#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: points to bit
 * @index: index to set
 *
 * Return: Error(-1) else 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
