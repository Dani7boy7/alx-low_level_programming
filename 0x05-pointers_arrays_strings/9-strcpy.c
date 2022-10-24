#include "holberton.h"

/**
 *	* char *_strcpy - it copirs a string
 *	* @dest: to be pasted on
 *	* @src: copy from
 *	* Return: the string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
