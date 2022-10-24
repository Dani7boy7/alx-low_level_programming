#include "main.h"

/**
 *	* swap_int - swaps both integers
 *	* @a: the first number to be swaped
 *	* @b: the second integer to be swaped
 *
 *
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
