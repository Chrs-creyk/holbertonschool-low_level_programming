#include <stdio.h>
/**
 * main - printing an alphabet in lowercase and uppercase
 * Return: (0)
 */

int main(void)
{
	char a, A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	}

	putchar('\n');
	return (0);
}
