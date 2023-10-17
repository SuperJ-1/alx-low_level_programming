#include "main.h"
/**
 * _strcpy - start point
 * @dest: where to copy the string
 * @src: source of the string to copy
 *
 * Desc: copies a string to a pointed destination
 *
 * Return: pointe to the dest string
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
