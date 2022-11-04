#include "main.h"

/**
 *	* _strcmp - compares pointers
 *	* @s1: pointer to first string
 *	* @s2: pointer to second string
 *	* Return: if greater use 0 if not 1
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
