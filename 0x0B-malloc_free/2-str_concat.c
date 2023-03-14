#include "main.h"

/**
 * _strlen - counts array
 * @s: array of elements
 *
 * Return: c
 */

int _strlen(char *s)
{
	unsigned int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}

/**
 * str_concat - back pointer to array
 * @s1: array one
 * @s2: array two
 * Return: array dynamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int c, d, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	for (c = 0; *(s1 + c) != '\0'; c++)
	{
		*(dst + c) = *(s1 + c);
	}

	for (d = 0; *(s2 + d) != '\0'; d++)
	{
		*(dst + c) = *(s2 + d);
		c++;
	}

	return (dst);
}

