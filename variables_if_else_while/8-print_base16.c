#include <stdio.h>

/**
 * main - printing alphabet in base 16
 * Return: (0)
 */

int main(void)
{
	char alpha = 'a';
	char num = '0';

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);

	putchar('\n');
	return (0);
}
