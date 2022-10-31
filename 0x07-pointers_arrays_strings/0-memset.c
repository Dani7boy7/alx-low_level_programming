#include "main.h"

/**
 *	* _memset - it fills a block with a specfic value
 *	* @s: the starting memory
 *	* @b: the wanted value
 *	* @n: number of bytes to be changed
 *	* Return: the changed array with new value
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
