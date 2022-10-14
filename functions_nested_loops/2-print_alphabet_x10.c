#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)

{

    char a, b = 0;

    while (b <= 9)
    {
        for (a = 'a'; a <= 'z'; a++)
        {
            _putchar(a);
        }
        _putchar('\n');
        b++;
    }
}