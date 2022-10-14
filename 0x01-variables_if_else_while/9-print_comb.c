#include <stdio.h>

/**
 *	* main - a program that writes every comb of numbers
 *
 *	* Return: 0 if succesful
 *
 */

int main(void)
{
	int y;

	for (y = '0'; y <= '9'; y++)
	{
	putchar(y);
if (y != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
