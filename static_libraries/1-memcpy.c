#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: area destination to copy
 * @src: area to be copied
 * @n: number of bytes
 * Return: Pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
