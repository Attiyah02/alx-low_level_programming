#include "main.h"

/**
 * clear_bit -  sets the value of a bit to 0
 * @n: points to b it
 * @index: index to set val
 *
 * Return: Error(-1) else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
