#include "function_pointers.h"
/**
 * main - function with the op
 * op_add - add op
 * op_sus - sus op
 * op_mul - mult op
 * op_div - div op
 * op_mod - mod op
 * Return: int
 */
int main(void)
{
	int op_add(int a, int b)
	{
		return (a + b);
	}
	int op_sub(int a, int b)
	{
		return (a - b);
	}
	int op_mul(int a, int b)
	{
		return (a * b);
	}
	int op_div(int a, int b)
	{
		return (a / b);
	}
	int op_mod(int a, int b)
	{
		return (a % b);
	}
}
