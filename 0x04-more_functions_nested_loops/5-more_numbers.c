#include "main.h"

/**
 *	* more_numbers - print m0 to 14 ten times
 *	* must be followed by a new line
 *
 *	* Return: 0 when succesful
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 = '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
