#include <unistd.h>

/**
 *	* _putchar - writes the letter
 *	* @c: the letteer to be printed
 *	* Return: 1 when succesful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
