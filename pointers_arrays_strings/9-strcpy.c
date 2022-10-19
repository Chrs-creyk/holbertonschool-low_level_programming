#include "main.h"

/**
 * *_strcpy - copy a tring into another string
 *
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	for (; src[i] != src[i - 1]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
