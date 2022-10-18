#include <stdio.h>
#include "main.h"

/**
 * _strlen - string
 * @s: the string to print
 * @str: something to print
 */

int _strlen(char *s)
{

	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
