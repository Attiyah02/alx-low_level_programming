#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 * Return: Always 0(Sucess)
 */

int main(void)

{
	long m, maxf;
	long num = 612852475143;
	double sq = sqrt(num);

	for (m = 1; m <= sq; m++)
	{
		if (num % m == 0)
		{
			maxf = num / m;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
