#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * Desc: prints 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
