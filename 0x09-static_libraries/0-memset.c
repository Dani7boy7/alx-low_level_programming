#include "main.h"

/**
 *	* _memset - fills a memory
 *	* @s: the space to be filled
 *	* @b: byte to be filled
 *	* @n: number of spaces
 *	* Return: pointer memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(s + i) = b;

	}
	return (s);
}
