#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 *	* is_palindrome - checks if the string is pallindrome
 *	* @s: the string to be reversed
 *	* Return: 1 when succesful and 0 noy
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *	* _strlen_recursion - gives thelength of the string
 *	* @s: calculates the length
 *	* Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *	* check_pal - the characters for palindrome
 *	* @s: string to check
 *	* @i:iteration
 *	* @len: length of the string
 *	* Return: 1 when pallindrome and 0 if not
 */

int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
