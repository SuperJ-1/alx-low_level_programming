#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the 50 fibonacci numbers
 *
 * Return: return 0
 */
int main(void)
{
	int num;
	unsigned long fibn1 = 0, fibn = 1, sum;

	for (num = 0; num < 50; count++)
	{
		sum = fibn1 + fibn2;
		printf("%lu", sum);

		fibn1 = fibn2;
		fibn2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
