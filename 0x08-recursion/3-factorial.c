#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: number to find factorial of
 *
 * Return: n > 0 - factiral of n
 *         n < 0 - 1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
