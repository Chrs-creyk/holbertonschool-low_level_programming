#include "main.h"
/**
 * create_array - make an array of chars equal a string
 * @size: the array
 * @c: character
 * Return: array point or NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(c) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
