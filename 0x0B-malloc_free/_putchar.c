#include "main.h"
#include <unistd.h>
/**
 *	* _putchar - writes the character to stdout
 *	* @c: the letter to print
 *	* Return: 1 when succesful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
