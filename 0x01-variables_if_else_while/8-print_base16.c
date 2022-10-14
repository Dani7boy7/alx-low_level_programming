#include <sdio.h>

/**
 *	* main - all numbers of base 16 in lowercase
 *
 *	*Return: 0 if successful
 *
 */
int main(void)
{
	int n;
	char dad;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (dad = 'a'; dad <= 'f'; dad++)
		putchar(dad);
	putchar('\n');

	return (0);
}
