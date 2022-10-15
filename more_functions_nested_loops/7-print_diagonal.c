#include "main.h"
/**
 *print_diagonal - writes a line
 * @n: lines
 * Return: not
 */
void print_diagonal(int n)

{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{

			for (b = 1; b <= a; b++)
			{
				if (b != a)

					_putchar(' ');
				if (b == a)
				{

					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
