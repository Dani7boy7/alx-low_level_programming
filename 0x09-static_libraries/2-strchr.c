#include "main.h"
#include <stdio.h>

/**
 *	* _strchr - locates a string
 *	* @c: the letter
 *	* @s: string located
 *	* Return: a pointer to occur
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != (char) c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
