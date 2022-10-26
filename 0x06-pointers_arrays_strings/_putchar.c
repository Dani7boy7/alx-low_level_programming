#include "main.h"
#include <unistd.h>

/**
 * 	* _putchar - writes the character c to stdout
 * 	* @c: the charater to print
 *
 * 	* Return: On sucess give 1
 * 	* on error, -1 is returned, and error is appropriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
