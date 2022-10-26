#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: the string @src is added to
 * @src: pointer 2
 * @n: number of bites of the string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int q = 0;
	int w = 0;

	q = strlen(dest);
	for (w = 0; w < n; w++)
	{
		dest[q + w] = src[w];
		if (src[w] == '\0')
		{
			break;
		}
	}
	return (dest);
}
