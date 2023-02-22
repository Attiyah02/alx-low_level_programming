#include "main.h"

/**
 * _isalpha -checks for alphabetic character
 * @c: character being checked
 * Return: 1 if c is a letter, else 0
 */

int _isalpha(int r)
{
	return((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'));
}
