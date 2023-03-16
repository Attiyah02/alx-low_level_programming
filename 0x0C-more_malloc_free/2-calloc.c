#include "main.h"

/**
 * _calloc - allocates memory
 * @nmemb: number of elements in array
 * @size:bytes for each position in array
 *
 * Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < nmemb * size; c++)
	{
		p[c] = 0;
	}

	return (p);
}
