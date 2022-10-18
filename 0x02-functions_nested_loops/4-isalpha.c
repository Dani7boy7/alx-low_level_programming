#include "main.h"

/**
 *	* _isalpha - checks for alphabet letters
 *	* @c: the letter to be checked
 *	* Return: 1 if c is alphabet, 0 if not
 *
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
