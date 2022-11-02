#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 *	* _sqrt_recursion - gives natural number
 *	* @n: number to be calculated
 *	* Return: the square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *	* actual_sqrt_recursion - helps to find the natural number
 *	* square root of a number
 *	* @n: number to be calculated
 *	* @i: the iterator
 *	* Return: the final square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
