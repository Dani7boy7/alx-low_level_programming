#include "function_pointers.h"
#include <stdio.h>

/**
 *	* print_name - print the name
 *	* @name: string to add
 *	* @f: change pointer to function
 *	* Return: 0 when succesful
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
