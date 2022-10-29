#include "main.h"
/**
 *main - print the program name
 *@argc: count of arguments
 *@argv: count of string
 *Return: 0
 */
int main(int argc, char *argv[])
{

	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
