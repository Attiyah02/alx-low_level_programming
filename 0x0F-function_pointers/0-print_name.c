#include <stdlib.h>
#include "function_pointers.h"

/**
 * print__name - prints a name
 * @name: name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		retrun;
	f(name);
}
