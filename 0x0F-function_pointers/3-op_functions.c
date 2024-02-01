#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *  - Returns the sum of two numbers.
 * @a: The first number
 * @b: The second number
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns difference of a and b
 * @a: The first int
 * @b: Second int
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Product of a and b
 * @a: Int 1
 * @b: Int 2
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns quotient of and b
 * @a: The first int
 * @b: The second int
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds modulus of a and b
 * @a: The first int
 * @b: The second int
 * Return: The modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
