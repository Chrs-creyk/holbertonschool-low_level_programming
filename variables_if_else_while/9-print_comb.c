#include <stdio.h>

/**
 * main - combination of single num
 * Return: 0
 **/

int main(void)
{

	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
