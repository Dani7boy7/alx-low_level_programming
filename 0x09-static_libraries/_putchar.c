#include <unistd.h>

/**
 *	* _putchar - writes strings
 *	* @c: the character
 *	* Return: 0 succesful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
