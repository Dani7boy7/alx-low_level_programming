#include "main.h"

/**
 *	* print_alphabet - print lowecase alphabet
 *
 *	* Return: 0 when succesful
 *
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');

}
