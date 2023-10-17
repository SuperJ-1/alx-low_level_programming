#include "main.h"
/**
 * print_rev - code starts here
 *
 * Desc: to print a code in reverse
 * @s: the string to be used
 */
void print_rev(char *s)
{
	int length = 0, index;

	while (s[index++])
		length++;

	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
