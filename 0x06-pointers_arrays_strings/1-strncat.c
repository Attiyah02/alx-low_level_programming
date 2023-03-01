#include "main.h"

/**
 * _strncat - concatenate two strings
 * using n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c;
	int t;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
		dest[c] = src[t];
		c++;
		t++;
	}
	dest[c] = '\0';
	return (dest);
}
