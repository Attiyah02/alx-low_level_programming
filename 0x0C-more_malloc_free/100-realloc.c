#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 *
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int c;

	if (ptr != NULL)
	{
		clone = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	relloc = malloc(new_size);
	if (relloc == NULL)
	{
		return (0);
	}
	for (c = 0; c < (old_size || c < new_size); c++)
	{
		*(relloc + c) = clone[c];
	}
	free(ptr);
	return (relloc);
}
