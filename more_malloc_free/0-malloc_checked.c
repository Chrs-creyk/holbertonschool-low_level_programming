#include "main.h"
/**
 * malloc_checked - where the valor is saved
 *@b: var
 *Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
