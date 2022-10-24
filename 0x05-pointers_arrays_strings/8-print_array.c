#include "main.h"

/**
 *	* print_array - it prints arrays
 *	* @a: the array name
 *	* @n: the number of elements in the array
 *	* Return: the inputs as array
 *
 */

void print_array(int *a, int n)
{
	int i
		for (i = 0; i < (n - 1); i++)
		{
			printf("%d, ", a[i]);
		}
	if (i == (n -1))
	{
		printf("%d", a[n -1]);
	}
	printf("\n");
}
