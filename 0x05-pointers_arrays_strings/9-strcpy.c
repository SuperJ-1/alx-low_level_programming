#include "main.h"
/**
 * _strcpy - start point
 * @dest: where to copy the string
 * @src: source of the string to copy
 * @n: bytes to copy
 * Desc: copies a string to a pointed destination
 *
 * Return: pointe to the dest string
 */
char *_strcpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
