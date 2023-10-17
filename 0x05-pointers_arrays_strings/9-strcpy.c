#include "main.h"
/**
 * _strcpy - start point
 * @dest: where to copy the string
 * @src: source of the string to copy
 * Desc: copies a string to a pointed destination
 *
 * Return: pointe to the dest string
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;
	const char *srcmc = src;

	while (srcmc[index])
	{
		dest[index] = srcmc[index];
		index++;
	}

	return (dest);
}
