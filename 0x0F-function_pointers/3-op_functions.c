#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: the augend
 * @b: the addend
 *
 * Return: the sum
 * Author: Gamachu AD
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts a number from another number
 * @a: the minuend
 * @b: the subtrahend
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the factor
 * @b: the factor
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gets the quotient of division
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - gets the remainder of division
 * @a: the dividend
 * @b: the divisor
 *
 * Return: the remainder (modulus)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
