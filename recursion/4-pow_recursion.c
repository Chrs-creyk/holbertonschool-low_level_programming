#include "main.h"

/**
 *   _pow_recursion - check
 *   @x: string
 *   @y: string
 *   Return: y is 1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
