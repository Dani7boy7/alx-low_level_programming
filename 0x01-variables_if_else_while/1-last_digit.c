#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *	* main - give random number to the variable n every time the code executes
 *	* string of the last digit
 *	* use the strings , and is greater than 5, is 0,is less than 6 and not 0
 *	* use the above strings
 *	* Return: 0 if succesfull
 *
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	}
	else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	}
	else if (lastn < 6 && lastn != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
