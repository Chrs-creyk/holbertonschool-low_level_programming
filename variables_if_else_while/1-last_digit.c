#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - Last number
*Return: 0
*/

int main(void)

{
	int n = rand() - RAND_MAX / 2;

srand(time(0));

	if (n > 0)
		printf("%d is positive\n", n);

	if (n == 0)
		printf("%d is zero\n", n);

	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
