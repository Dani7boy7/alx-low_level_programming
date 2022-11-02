#include "main.h"

/**
 *	* _puts_recursion - simmilar to puts
 *	* @s: the input
 *	* Return: gives 0 when succesful
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
