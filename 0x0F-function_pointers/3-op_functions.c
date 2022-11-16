#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *	* op_add - gives sum of numbers
 *	* @a: first number
 *	* @b: second number
 *	* Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 *	* op_sub - difference of two numbers
 *	* @a: first number
 *	* @b: second number
 *	* Return: 0 when succesful
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *	* op_mul - returns product
 *	* @a: the first number
 *	* @b: second number
 *	* Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *	* op_div - returns divisio
 *	* @a: first number
 *	* @b: second number
 *	* Return: quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *	* op_mod - returns reminder
 *	* @a: first number
 *	* @b: second number
 *	* Return: remainder
 */

imt op_mod(int a, int b)
{
	return (a % b);
}
