#include <stdio.h>

/**
 * main - printing a reverse alphabet
 * Return: (0)
 */

int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');

	return (0);

}
