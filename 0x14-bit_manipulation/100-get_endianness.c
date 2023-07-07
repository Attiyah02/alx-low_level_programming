#include "main.h"

/**
 * get_endianness - checks endianess
 *
 * Return: big endian(0) little endian (1)
 */

int get_endianness(void)
{
	int nm = 1;
	char *end = (char *)&nm;

	if (*end == 1)
		return (1);

	return (0);
}
