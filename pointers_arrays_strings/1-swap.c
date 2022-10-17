#include "main.h"

/**
 * swap_int - swaping the init
 * @a: 98
 * @b: 42
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *b;
	*b = *a;
	*a = c;
}
