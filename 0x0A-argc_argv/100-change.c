#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins
 * @argc: number of command line arguments
 * @argv: array
 *
 * Return: 0(Succes)
 */

int main(int argc, char *argv[])
{
	int cent_s, n_coins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cent_s = atoi(argv[1]);

	while (cent_s > 0)
	{
		if (cent_s >= 25)
			cent_s -= 25;
		else if (cent_s >= 10)
			cent_s -= 10;
		else if (cent_s >= 5)
			cent_s -= 5;
		else if (cent_s >= 2)
			cent_s -= 2;
		else if (cent_s >= 1)
			cent_s -= 1;
		n_coins += 1;
	}
	printf("%d\n", n_coins);
	return (0);
}
