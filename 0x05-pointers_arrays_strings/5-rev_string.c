#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rvs = s[0];
	int a = 0;
	int j;

	while (s[a] != '\0')
	{
		a++;
	}
	for (j = 0; j < a; j++)
	{
		a--;
		rvs = s[j];
		s[j] = s[a];
		s[a] = rvs;
	}
}
