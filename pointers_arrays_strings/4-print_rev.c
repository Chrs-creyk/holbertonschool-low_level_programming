#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - printin in reverse
 * @s: the string to print
 */

void print_rev(char *s)
{
	int i;

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
