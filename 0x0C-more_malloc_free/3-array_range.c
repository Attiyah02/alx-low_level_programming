#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minium
 * @max: maximum
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, i = 0, k = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = k++;
	return (arr);
}
