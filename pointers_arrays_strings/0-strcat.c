#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: the string @src is added to
 * @src: the string to be appended
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{

	int len1 = 0, len2 = 0;
	int i;

	while (src[len1] <= src[len1 - 1])
		len1++;

	while (dest[len2] <= dest[len2 - 1])
		len2++;

	for (; i <= len1; i++)
		
	{
		dest[len2] = src[i];

		len2++;
	}

	return (dest);
}
