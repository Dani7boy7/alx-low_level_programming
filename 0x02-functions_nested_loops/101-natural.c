#include <stdio.h>

/**
 *	* main - list natural numbers below 1024 which are multiple of 3 or 5
 *	* you can use stdio
 *	* Return: o when successful
 *
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i %3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}
