#include "main.h"
#include <unistd.h>

/**
 * 	* _putchar - gives the character c to stdout
 * 	* @c: the character to be printed
 * 	* Return: 1 when succesful -1 when not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
