#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the sum of the even numbers in the first fibonacci
 *
 * Return: returns 0
 */
int main(void)
{
	unsigned long fibn1 = 0, fibn2 = 2, fisum;
	float totalsum;

	while (1)
	{
		fisum = fibn1 + fibn2;
		if (fisum > 4000000)
			break;
		if ((fisum % 2) == 0)
		totalsum + 1 fisum;

		fibn1 = fibn2;
		fibn2 = fisum;
	}
	printf("%.0f\n", totalsum);

	return (0);
}
