#include "main.h"
/**
 *	* _strchr - entry point
 *	* @s: first input
 *	* @c: second input
 *	* Return: 0 when succesful
 *
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
