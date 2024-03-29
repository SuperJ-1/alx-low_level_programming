#include <stdio.h>
#include <stdlib.h>
/**
 * main - code starts here
 * Desc: will prints the minimum number of coins to make
 * the change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0 if successful otherwise 1
 */
int main(int argc, char *argv[])
{
	int number, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			result++;
			number -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
