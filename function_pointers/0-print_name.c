#include "function_pointers.h"

/**
 * print_name - function
 * @name: a char
 * @f: void
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{

	if (f)
		f(name);

}
