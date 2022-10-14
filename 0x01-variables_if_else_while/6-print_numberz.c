#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	* main - write numbers
 *
 *	* Return: 0 if succesful
 *
 */

int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
		putchar(f);
	putchar('\n');

	return (0);
}
