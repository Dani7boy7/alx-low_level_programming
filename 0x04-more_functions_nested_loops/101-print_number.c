#include "main.h"

/**
 *	*print_number - print an integer
 *	* @n: the integer to be printed
 *	* Return: 0 if succesful
 *
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('_');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar((n1 % 10) + '0');

}
