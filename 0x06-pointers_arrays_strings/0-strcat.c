#include "main.h"

/**
 * _strcat - concatenates two tsring
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int c;
	int t;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	t = 0;
	while (src[t] != '\0')
	{
		dest[c] = src[t];
		c++;
		t++;
	}

	dest[c] = '\0';
	return (dest);
}
