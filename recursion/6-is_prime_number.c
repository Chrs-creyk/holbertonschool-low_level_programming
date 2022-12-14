#include "main.h"
int is_divisible(int num, int div);
/**
 * is_prime_number - Returns 1 if its a prime number, otherwise returns 0
 * @n: Input integer
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divisible
 * @num: number to be checked
 * @div: result of division
 * Return: 1 if num is divisible or 0 if num is not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}
