#include "main.h"

/**
 * _isalpha -checks for alphabetic character
 * @r: character being checked
 * Return: 1 if r is a letter, else 0
 */

int _isalpha(int r)
{
	return ((r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z'));
}
