#include "main.h"

/**
 *	* _puts - gives a string
 *	* @str: the string to print
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
