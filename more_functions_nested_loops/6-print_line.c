#include "main.h"
/**
 * print_line - proto
 *
 * @n: the number line
 * Return: 0
 */

void print_line(int n)
{

	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
