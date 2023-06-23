#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints strings with new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;
	char *str;

	va_start(vlist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vlist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(vlist);
}
