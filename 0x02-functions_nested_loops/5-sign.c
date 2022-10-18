#include "main.h"

/**
 *	* print_sign - give the sign of a given number
 *	* @n: the number to be checked
 *	* Return: 1 if the number is posotive
 *	* eturn: 0 if the number is 0 and -1 if the number is negative
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
