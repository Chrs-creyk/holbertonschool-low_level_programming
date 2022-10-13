#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Last number
*Return: 0
*/

int main(void)

{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

	if (n % 10 && n > 5)
		printf("%d is greater than 5\n", n);

	if (n % 10 && n == 0)
		printf("%d is 0\n", n);

	if (n % 10 && n < 6)
		printf("%d is less than 6 and not 0\n", n);

	return (0);
}
