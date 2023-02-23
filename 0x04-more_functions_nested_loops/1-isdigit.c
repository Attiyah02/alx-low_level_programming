#include "main.h"

/**
 * _isdigit - check for a digit between 0 to 9
 * @d: char being checked
 *
 * Return: 0 or 1
 */

int _isdigit(int d)
{
	if (d >= '0' && d <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
