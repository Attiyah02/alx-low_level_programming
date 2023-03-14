#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 *
 * Return: 1
 */

int _strlen(car *s)
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
 * _strcpy - copies arrays
 * @src: array of elements
 * @dest: dest array
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';

	return (dest);
}

/**
 * _strdup - array to print a string
 * @str: array of elements
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;
	
	dst = (char *) malloc(size *sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}
