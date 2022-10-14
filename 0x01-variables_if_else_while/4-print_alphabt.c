#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	* main - enter the letters and provide with answers
 *
 *	* Return: 0 if succesfull
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z' ; low++)
	{
		if (low != e && low != q)
			putchar(low);
	}
	printf("\n");

	return (0);
}
