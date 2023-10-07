#include <stdio.h>
#include <stdalign.h>
#include <stdnoreturn.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase withou q&e
 *
 * Return: returns 0
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
	}
	putchar('\n');
	return (0);
