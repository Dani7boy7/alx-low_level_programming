#include "main.h"

/**
 *	* _strncat - cocatenates two strings
 *	* @dest: the string to append
 *	* @src: append to dest
 *	* @n: number of bytes
 *	* Return: a pointerresulting
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
