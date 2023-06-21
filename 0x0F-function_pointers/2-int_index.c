#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array being used
 * @size: no. of elements in array
 * @cmp: pointer to function
 *
 * Return: Successful(0) or Unsuccessful (-1)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (x < size)
			{
				if (cmp(array[x]))
					return (x);

				x++;
			}
		}
	}
	return (-1);
}
