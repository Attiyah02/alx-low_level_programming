#include "main.h"

/**
 * flip_bits - returns bits needed to flip
 * @n: number
 * @m: number to flip n
 *
 * Return: number needed to get n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int excl_or = n ^ m, b_flipped = 0;

	while (excl_or > 0)
	{
		b_flipped += (excl_or & 1);
		excl_or >>= 1;
	}

	return (b_flipped);
}
