#include "main.h"

/**
 *	* _isdigit - checks for digits
 *	* @c: the character
 *	* Return: i if ok 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}
