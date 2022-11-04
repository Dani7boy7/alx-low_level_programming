#include "main.h"

/**
 *	* _isupper - checks uppercase letter
 *	* @c: the letters
 *	* Return: 1 when ok 0 when not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
