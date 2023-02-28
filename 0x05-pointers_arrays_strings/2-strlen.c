#include "main.h"

/**
 * _stream - returns length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '0')
	{
		length++;
		s++;
	}

	return (length);
}
