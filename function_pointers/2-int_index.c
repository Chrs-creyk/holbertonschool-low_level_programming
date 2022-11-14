#include "variadic_functions.h"
/**
 * int_index - search for integer
 * @array: array
 * @size: size
 * @cmp_ 
 * @
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int y;

    if (array && cmp)
    {
        if (size <= 0)
            return (-1);

        for (y = 0; y < size; y++)
            if (cmp(array[y]))
                return (y);
    }
    return (-1);
}