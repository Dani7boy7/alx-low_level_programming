#include "main.h"

/**
 *	* _strlen - gives length of string
 *	* @s: string
 *	* Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
