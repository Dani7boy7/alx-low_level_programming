#include "main.h"
/**
 *	* print_rev - prints string in reverse
 *	* @s: string
 *	* Return: 0 when succesful
 *
 */

void print_ rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o longi; o > 0; o--)
	{
		_putchar(*s)
			s--;
	}

	_putchar('\n');
}
