#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- returns sum of all
 * @n: no. of arguements
 *
 * Return:sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vlist, n);

	for (x = 0; x < n; x++)
		sum += va_arg(vlist, int);

	va_end(vlist);

	return (sum);
}
