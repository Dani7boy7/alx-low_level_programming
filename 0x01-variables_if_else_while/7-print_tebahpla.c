#include <stdio.h>

/**
 *	* main - alphabets in reverse
 *
 *	* Return: 0 if successful
 *
 */

int main(void)
{
	char wow;

	for (wow = 'z'; wow >= 'a'; wow--)
		putchar(wow);
	putchar('\n');

	return (0);
}
