#include "main.h"
#include <stdio.h>
/**
 *print_array - function a string
 *@a: varible
 *@n: varible
 */
void print_array(int *a, int n)
{
	int i;

	for (; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	if (n <= 4)
		printf("\n");
}
