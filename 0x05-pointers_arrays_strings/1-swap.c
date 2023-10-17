#include "main.h"
/**
 * swap_int - entry point
 * @a: integer 1
 * @b: integer 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = *tmp;
}
