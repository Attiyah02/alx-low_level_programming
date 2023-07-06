#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int
 * @b: string with binary number
 *
 * Return: changed number
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int base10 = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		base10 = 2 * base10 + (b[j] - '0');
	}
	return (base10);
}
