#include <stdio.h>

/**
 *	* main - this is a program prints lowercase alphabets followed by a new line
 *	* we can only use putchar
 *	* also we can use it twice
 *	* Return: 0 if succesfull
 */

int main(void)
{
	int l = 'a';

	while (1 <= 'z')
	{
		putchar(l);
		l += 1;
	}
	putchar('\n');
	return (0);
}
