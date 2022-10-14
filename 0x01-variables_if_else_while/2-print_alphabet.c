#include <stdio.h>

/**
 *	* main - this is a program prints lowercase alphabets followed by a new line
 *	* we can only use putchar
 *	* also we can use it twice
 *	* Return: 0 if succesfull
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
