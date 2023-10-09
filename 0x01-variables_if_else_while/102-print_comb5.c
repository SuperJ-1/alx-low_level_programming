#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all combination of two digits
 * from 0 to 99
 *
 * Return: returns 0
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 100; n1++)
	{
		for (n2 = n1; n2 < 100; n2++)
		{
			int num1 = n1 / 10;
			int num2 = n1 % 10;
			int num3 = n2 / 10;
			int num4 = n2 % 10;

			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(' ');
			putchar(num3 + '0');
			putchar(num4 + '0');
			if (!(n1 == 99 && n2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
