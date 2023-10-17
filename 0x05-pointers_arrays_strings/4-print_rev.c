#include "main.h"
/**
 * print_rev - code starts here
 *
 * Desc: to print a code in reverse
 * @s: the string to be used
 */
void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

