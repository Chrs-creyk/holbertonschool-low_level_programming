#include "main.h"

/**
 * factorial - the return
 * @n: number of
 * Return: factorial of
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
