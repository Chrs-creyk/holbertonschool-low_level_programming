#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 *main - adding random number to n*
 *
 *Return: 0
 */
int main(void)

{
    int n;
    srand(time(NULL));
    n = rand() - rand_max / 2;
    if (n > 0)
    
    printf("%d is positive n\", n);
    printf ("%d is zero n\", n);
    printf ("%d is negative n\", n);

return (0); 
}
