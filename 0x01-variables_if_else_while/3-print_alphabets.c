#include <stdio.h>

/**
 *  * main - print alphabets in uppercase
 *
 *
 *
 *     * this program prints "abcopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
 *
 *      * Return: 0 if succesful
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
	putchar('\n');

	return (0);
}
