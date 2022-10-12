#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*First time using % like a condicion
*/
int main(void)

{

	int n;

	printf("Last digit of ");

	int n = rand() - RAND_MAX / 2;

	srand(time(0));
	if (n % 10 > 5)
		printf("%d is %d and is greater than 5\n", n, n % 10);

	else if (n % 10 == 0)
		printf("%d is %d and is 0\n", n, n % 10);

	else
		printf("%d is %d and is less than 6 and not 0\n", n, n % 10);

return (0);

}
